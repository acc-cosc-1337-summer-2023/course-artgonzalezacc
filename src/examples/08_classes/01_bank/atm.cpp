//atm.cpp
#include "atm.h"

using std::cin; using std::cout;

void display_menu()
{
    cout<<"\n\nACC Bank\n\n";
    cout<<"1-Display Balance\n";
    cout<<"2-Deposit\n";
    cout<<"3-Withdraw\n";
    cout<<"4-Exit\n";
}

void run_menu(BankAccount& account)
{
    auto choice = 0;

    do
    {
        display_menu();
        cout<<"Enter choice: ";
        cin>>choice;
        handle_option(account, choice);

    } while (choice !=4);
}

void handle_option(BankAccount& account, int option)
{
    auto amount = 0;

    switch(option)
    {
    case 1:
        cout<<"Balance: "<<account.get_balance()<<"\n";
        break;
    case 2:
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        account.deposit(amount);
        break;
    case 3:
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        account.withdraw(amount);
        break;
    case 4:
        cout<<"Program will exit....\n";
        break;
    default:
        cout<<"Invalid option..\n";
        break;
    }
}