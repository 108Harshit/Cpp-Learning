#include <iostream>
using namespace std;
#define YELLOW "\033[32m"
#define RESET "\033[0m"

int deposit(int balance){
    int a;
    cout<<"Enter Amount :";
    cin>>a;
    balance=balance+a;
    return balance; 
    }
    
int withdraw(int balance){
    int w;
    cout<<"Enter Amount :";
    cin>>w;
    if(w>balance){
        cout<<"Insufficiant Balance";
        }
    else{
        balance = balance-w;
        }
    return balance;        
    }    

int main()
{   static int balance=0;
    char e;
    char option='y'; 
    cout<<YELLOW;
    cout<<"######## WELCOME TO THE AUTOMATED BANKING SYSTEM ######## "<<endl;
    cout<<RESET;
    while(option != 'e'){
    
    cout<<"PRESS D to Deposit"<<endl<<endl;
    cout<<"PRESS W to Withdraw"<<endl<<endl;
    cout<<"PRESS E to Exit"<<endl<<endl;
    cout<<"Enter :";
    cin>>option; 
    switch (option){
        case 'd':
        balance=deposit(balance);
        cout<<"Your Balance is "<<balance<<endl<<endl<<endl;
        break;
        
        case 'w':
        balance=withdraw(balance);
        cout<<"Your Balance "<<balance<<endl<<endl<<endl;
        break;
        
        case 'e':
        option='e';
        break;
        
        default:
        cout<<"ERROR"<<endl;
        
        }
            
    }
    cout<<"Thank You";
    
    return 0;
}