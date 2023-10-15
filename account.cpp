#include "account.h"

void savings::setRate(double Rate){
    this->Rate = Rate;
}
double savings::getRate(){
    return this->Rate;
}

savings::savings(int AccNo, string customer, double Balance, double Rate):BankAccount(AccNo, customer,Balance),Rate(Rate){

}

void savings::deposit(double amount,double Rate){
    amount = amount*Rate/12;
    Balance = Balance + amount;
    cout<<"your balane is"<<Balance<<endl;
}

/*void savings::deposit(double amount) {
    // Calculate interest based on Rate and add it to the deposit
    double interest = amount * Rate / 12;
    BankAccount::deposit(amount + interest);
}*/