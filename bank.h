#ifndef BANK_H
#define BANK_H

class Bank 
{
    double balance ;
    
    public :
    
    Bank();
    void deposit(double amt);
    void withdraw(double amt);
    double checkbalance() const;

};
#endif
