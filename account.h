#include "bank.h"


class savings : public BankAccount{
    private: 
        double Rate;

    public:
        void calculate_interst();
        double getRate();
        void setRate(double Rate);

        void deposit(double amount,double rate);

        savings(int AcccNo, string customer, double balance, double rate );

};

