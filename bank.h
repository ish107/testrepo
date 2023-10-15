#include "libraries.h"
#include <string>

class BankAccount{

    protected:
        int AccountNo;
        string CustomerName;
        double Balance;

    public:
        BankAccount(int AccNo, string Customer, double balance);
        void deposit(double amount);
        void withdraw(double amount);

        int getAccountNo();
        void setAccountNo(int AccountNo);

        string getCustomerName();
        void setCustomerName(string CustomerName);

        double getBalance();
        void setBalance(double Balance);

};