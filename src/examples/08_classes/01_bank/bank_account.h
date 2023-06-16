//bank_account.h
#include<iostream>

class BankAccount
{

public://access specifier
    BankAccount(){std::cout<<"Using default constructor\n";}//default constructor
    BankAccount(int b) :balance(b) {std::cout<<"Using parameterized constructor\n";}//class constructor
    int get_balance() const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private://access specifier
    int balance{0};//explicity init to 0
    
};