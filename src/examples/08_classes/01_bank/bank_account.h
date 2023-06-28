//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount//abstract class - can't be used directly in a variable/instance of class
{

public://access specifier
    BankAccount(){std::cout<<"Using default constructor\n";}//default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor\n";}//class constructor
    virtual int get_balance() const = 0;//pure virtual function
    virtual void deposit(int amount) final;
    virtual void withdraw(int amount) final;
private://access specifier
    int balance{0};//explicity init to 0
    
};

#endif