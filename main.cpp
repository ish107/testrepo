#include "account.h"

int main()
{
    BankAccount acc1(48242242,"John Hutton",12356.00);
    BankAccount* acc2 = new BankAccount(1452587,"jane doe",4563.0);

    acc1.deposit(8000.00);
    acc2->withdraw(5000.00);

    delete acc2;

    savings s1(123456,"mary angela",546802.00,5.62);
    s1.deposit(1000,5.62);
}