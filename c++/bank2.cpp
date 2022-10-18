#include <iostream>
#include<conio.h>
#include<string.h>
#include <stdlib.h>

using namespace std;

struct accountdetails{
    int accountnumber;
    char name[50];
    char password[50];
    int balance;
    int accounttype;
    accountdetails *next;
}*head=NULL,*last=NULL;

void hold(){
    cout<<"Press any key to continue...";
    getch();
    cout<<endl;
    system("cls");
}

class User{
    private:
    void displayuser(){
        system("cls");
        cout<<"Account number: "<<last->accountnumber<<endl;
        cout<<"Account holder: "<<last->name<<endl;
        if (last->accounttype==1)
        cout<<"Account type: Current Account"<<endl;
        else
        cout<<"Account type: Savings Account"<<endl;
        cout<<"Account balance available: "<<last->balance<<"\n\n";
        cout<<"Account created successfully. Please note down these details.\n\n";
        hold();
    }
    public:
    int caccount_number=0;
    User(){
        struct accountdetails *temp=(struct accountdetails *)malloc(sizeof(struct accountdetails));
        system("cls");
        temp->next=NULL;
        cout<<"Enter 1 to open current account.\nEnter 2 to open savings(default) account.\n";
        int temptype;
        temptype=getch();
        if(temptype=='1')
        temp->accounttype=1;
        else
        temp->accounttype=2;
        cout<<"Enter your name: ";
        cin>>ws;
       
        scanf("%[^\t\n]",temp->name);
        cout<<"Enter a secret PIN: ";
        cin>>temp->password;
        cout<<"Enter amount to deposit: ";
        cin>>temp->balance;
        cout<<endl;
       
        if(last){
            temp->accountnumber=last->accountnumber+1;
            last->next=temp;
            last=temp;
        }
        else{
            temp->accountnumber=1;
            head=temp;
            last=temp;
        }
        caccount_number=last->accountnumber;
        displayuser();
    }
};

class {
    accountdetails *headt=head;
    public:
    transaction_status(int n){
        while(n!=headt->accountnumber)
        headt=headt->next;
        cout<<headt->name<<" Logged In\n\n";
    }
    int showbalance(){
        
        cout<<"\nAccount Number:\t\t\t"<<headt->accountnumber<<endl;
        cout<<"Acount holder's Name:\t\t"<<headt->name<<endl;
        cout<<"Account Balance Available:\t"<<headt->balance<<" Rs."<<endl;
        hold();
        return 0;
    }
    void deposit(){
        system("cls");
        int amt;
        cout <<"Enter amount to be depositted: ";
        cin>>amt;
        headt->balance+=amt;
        showbalance();
    }
    void withdrawl(){
        system("cls");
        int amt;
        cout <<"Enter amount to be withdrawn: ";
        cin>>amt;
        if(amt<=headt->balance)
        headt->balance-=amt;
        else
        cout<<"Low Balance...";
        showbalance();
    }
    void deactivate(){
        system("cls");
        accountdetails *headtemp;
        headtemp=head;
        
        if(headtemp->next)
        {
            while(headtemp->next!=headt)
                headtemp=headtemp->next;
        }
        headtemp->next=headt->next;
        free(headt);
        cout<<"Deactivated\n";
    }
};

class customer{
    public:
    int verify(int tacc,char tpass[50]){
        system("cls");
        accountdetails *headt=head;
        int i=0;
        while(headt){
            if(tacc==headt->accountnumber){
                if(strcmp(tpass,headt->password)==0){
                  
                    return 1;
                }
                else{
                    for(;i<3;i++){
                        cout<<"incorrect PIN\nPlease try again("<<3-i<<" attempts remaining\n";
                        cout<<"Enter secret PIN: ";
                        cin>>tpass;
                        continue;
                    }
                    if(headt->next)
                    headt=headt->next;
                    else{
                        return 0;
                    }
                }
            }
            else{
                if(headt->next)
                headt=headt->next;
                else{
                    return 0;
                }
            }
            
        }
        cout<<"data unavailable";
        return 0;
    }
    int loginhome(int accno){
        Transaction_statu cust(accno);
        int x=1;
        while(x){
          
            char opt;
            cout<<"1. Show Balance\n";
            cout<<"2. Deposit\n";
            cout<<"3. Withdraw\n";
            cout<<"4. Deactivate\n";
            cout<<"press any key to Log Out!...\n";
            cout<<"Enter your choice:   ";
            cin>>opt;
            switch(opt){
                case '1':{
                    system("cls");
                    cust.showbalance();
                    break;
                }
                case '2':{
                    cust.deposit();
                    break;
                }
                case '3':{
                    cust.withdrawl();
                    break;
                }
                case '4':{
                    cust.deactivate();
                  
                }
                default:
                x=0;
                cout<<"\n***Logged out***\n\n";
                hold();
              
                break;
            }
            system("cls");
        }
        return 0;
    }
    int loginfn(){
        system("cls");
        int tacc;
        char tpass[50];
        cout<<"Enter your Account number: ";
        cin>>tacc;
        cout<<"Enter PIN.\n";
        cin>>tpass;
        if(verify(tacc,tpass)){
          
            loginhome(tacc);
        }
        return 0;
    }
    customer(){
        int x=1;
        while(x){
        
            char opt;
            cout<<"Welcome!\n\n";
            cout<<"1. Register User\n";
            cout<<"2. Login\n";
            cout<<"press any key to Exit...";
            cin>>opt;
            cout<<endl;
            switch(opt){
                case '1':{
                    User newu;
                    if(newu.caccount_number)
                    loginhome(newu.caccount_number);
                    break;
                }
                case '2':{
                    loginfn();
                    break;
                }
                default:
                x=0;
                break;
            }
            system("cls");
        }
    }
};
int main(){
    system("cls");
    system("Color 1f");
    customer x;
    cout<<"\n\tArigato Gozaimas!!!\n\tExited!\n";
    return 0;
}