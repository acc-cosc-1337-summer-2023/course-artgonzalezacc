//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

public://access specifier
    BankAccount(){std::cout<<"Using default constructor\n";}//default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor\n";}//class constructor
    virtual int get_balance() const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private://access specifier
    int balance{0};//explicity init to 0
    
};

#endif