#include "bank.h"
#include<iostream>

int main()
{
    Bank IOB ;
    std::cout << "BALANCE : " << IOB.checkbalance();
    std::cout << std::endl;
    IOB.deposit(500);
    std::cout << "BALANCE : " << IOB.checkbalance();
    std::cout << std::endl;
    IOB.withdraw(200);
   std::cout << "BALANCE : " << IOB.checkbalance();
   std::cout << std::endl;
}
