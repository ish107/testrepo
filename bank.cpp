#include "bank.h"

void BankAccount::deposit(double amount){  
    Balance = Balance+amount;
    cout<<"Your current balance"<<Balance<<endl;
}

void BankAccount::withdraw(double amount){
    if(Balance>amount){
        Balance = Balance-amount;
        cout<<"Your current balance "<<Balance<<endl;
    }else{
        cout<<"Insufficient funds"<<endl;
    }
}

BankAccount::BankAccount(int AccNo, string Customer, double balance){
    this->AccountNo=AccNo;
    this->CustomerName=Customer;
    this->Balance=balance;
    cout<<"constructor working"<<endl;
}


int BankAccount::getAccountNo(){
    return this->AccountNo;
}

void BankAccount::setAccountNo(int AccN){
    this->AccountNo=AccN;
}

string BankAccount :: getCustomerName(){
    return this->CustomerName;
}

void BankAccount::setCustomerName(string name){
    this->CustomerName=name;
}

double BankAccount::getBalance(){
    return this->Balance;
}

void BankAccount::setBalance(double balance){
    this->Balance=balance;
}