#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice = 0;
    do{
        
    cout<<"******************************************************\n";
    cout<<"                  Welcome to Apna Bank                   \n";
    cout<<"******************************************************\n";
    cout<<"1. Show Balance\n";
    cout<<"2. Deposite Money\n";
    cout<<"3. Withdraw Money\n";
    cout<<"4. Exit\n";
    cin>>choice;

    switch(choice){
        case 1: showBalance(balance);
        break;
        case 2: balance+=deposit();
        showBalance(balance);
        break;
        case 3: balance-=withdraw(balance);
        showBalance(balance);
        break;
        case 4: cout<<"Thanks for visiting.";
        break;
        default: cout<<"invalid input";
        break;
    }
    }while(choice !=4);
    return 0;
}

void showBalance(double balance){
    cout<<"Your Balance is : "<<balance<<endl;
}
double deposit(){
    double amount =0;
    cout<<"Enter amount to deposit : "<<endl;
    cin>>amount;

    if(amount>0){
        return amount;
    }else{
        cout<<"Enter a valid input";
    }
}
double withdraw(double balance){
    double amount=0;
    cout<<"Enter amount to withdraw : "<<endl;
    cin>>amount;
    if(amount<=balance){
         return amount;
    }else {
        cout<<"insufficiant balance";
    }
   
}
