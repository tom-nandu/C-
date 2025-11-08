#include "bank.h"
#include<iostream>

Bank::Bank()
{
    double balance = 0.0;
}

void Bank::deposit(double amt)
{
    if (amt>0)
    {
        balance += amt;
        std::cout<<"AMOUNT CREDITED : " << amt <<"\n" ;
    }
    else 
    {
        std::cout << "Invalid deposit amount.\n";
    }
}

void Bank::withdraw(double amt)
{
    if(balance>=amt && amt>0)
    {
        balance -= amt;
        std::cout<<"AMOUNT DEBITED : " << amt << "\n" ;
    }
    else
    {
        std::cout << "INVALID or Insufficient\n";
    }
}
double Bank::checkbalance() const
{
    return balance;
}
