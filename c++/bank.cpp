#include <iostream>
using namespace std;
class Bank{
    public:
    double balance = 0;
    string id;
    string pin;
    string name;
    Bank *next; 
};
Bank *head = NULL;

// void print(Bank **head);

void pause()
{
    string s;
    cout << "Press any key to continue...." << endl;
    cin >> s;
    return;
}

int main()
{
    system("cls");
    int choice;
    cout << "Welcome To L&G Bank" << endl << "1. New User Registeration.\n2. Existing User Login.\n3. Exit\nEnter Your Choice.";
    cin >> choice;
    switch (choice)
    {
    case 1:
        newUserRegistration(&head);
        main();
        break;
    case 2:
        loginUser(&head);
        break;
    case 3:
        exit(0);
    default:
        cout << "Enter A Valid Choice." << endl;
        pause();
        main();
        break;
    }
}

void newUserRegistration(Bank **head)
{
    string id,pin,name;
    cout << "Enter Your Name." << endl;
    cin>>ws;
    getline(cin,name);
    cout << "Enter Your Id. (without whitespaces)" << endl;
    cin >> id;
    cout << "Create Your PIN." << endl;
    cin >> pin;
    Bank *node = new Bank();
    Bank *last = *head;
    node->id = id;
    node->name = name;
    node->pin = pin;
    node->next = NULL;
    if(*head == NULL)
    {
        *head = node;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
    } 
    last->next = node;
    return;
}

void services(Bank **head, string id){
    system("cls");
    int choice;
    cout << "We provide the following services." << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Deactivate Account" << endl;
    cout << "5. Log Out" << endl;
    cout << "Enter Your Choice" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            depositMoney(head,id);
            services(head,id);
            break;
        case 2:
            withdrawMoney(head,id);
            services(head,id);
            break;
        case 3:
            checkBalance(head,id);
            services(head,id);
            break;
        case 4:
            closeAccount(head,id);
            services(head,id);
            break;
        case 5:
            cout << "User Logged Out!" << endl;
            pause();
            main();
            break;
        default:
            services(head,id);
            break;  
    }
}

void loginUser(Bank **head)
{
    string id,pin;
    cout << "Enter Id" << endl;
    cin >> id;
    Bank *temp = *head;
    if(*head == NULL)
    {
        cout << "Id does not Exist! Create One" << endl;
        pause();
        main();
    }
    while(temp != NULL)
    { 
        if(temp->id == id)
        {
            cout << "Enter PIN" << endl;
            cin >> pin;
            if(temp->pin == pin)
            {
                cout << "Welcome " << temp->name << "!" << endl;
                pause();
                services(head,id);
            }
            else
            {
                cout << "Wrong PIN" << endl;
                pause();
                main();
            }
        }
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout << "Id does not Exist! Enter Correct Id or create a new one." << endl;
        pause();
        main();
    }
}

// void print(Bank **head)
// {
//     Bank *temp = *head;
//     while(temp != NULL)
//     {
//         cout << temp->balance << temp ->id << temp->name << temp->pin << endl;
//         temp = temp->next;
//     }
// }

void depositMoney(Bank **head, string id)
{
    double amount;
    Bank *temp = *head;
    cout << "Enter Money to be deposited." << endl;
    cin >> amount;
    while(temp != NULL)
    {
        if(temp->id == id)
        {
            temp->balance += amount;
            cout << "New Balance = " << temp->balance << endl;
            pause();
            services(head,id);
        }
        temp = temp->next;
    }
}

void checkBalance(Bank **head, string id)
{
    Bank *temp = *head;
    while(temp != NULL)
    {
        if(temp->id == id)
        {
            cout << "Current Balance = " << temp->balance << endl;
            pause();
            services(head,id);
        }
        temp = temp->next;
    }
}

void withdrawMoney(Bank **head, string id)
{
    double amount;
    Bank *temp = *head;
    cout << "Enter Money to be withdrawn." << endl;
    cin >> amount;
    while(temp != NULL)
    {
        if(temp->id == id)
        {
            if(temp->balance < amount)
            {
                cout << "Insufficient Funds" << endl;
                pause();
                services(head,id);
            }
            temp->balance -= amount;
            cout << " Money Debited = " << amount << endl;
            cout << "New Balance = " << temp->balance << endl;
            pause();
            services(head,id);
        }
        temp = temp->next;
    }
}

void closeAccount(Bank **head, string id)
{
    Bank *temp = *head;
    Bank *prev = NULL;
    if (temp != NULL && temp ->id == id)
    {
        *head = temp->next;
        delete temp;
        cout << "Account Deactivated" << endl;
        pause();
        main();
    }
    else
    {
        while(temp != NULL && temp ->id != id)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout << "Account Not Found" << endl;
            pause();
            main();
        }
        prev->next = temp->next;
        cout << "Account Deactivated" << endl;
        delete temp;
        pause();
        main();
    }
}