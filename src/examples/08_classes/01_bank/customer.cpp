//customer.cpp
#include "customer.h"

using std::make_unique;

Customer::Customer()
{
    accounts.push_back(make_unique<CheckingAccount>(rand() % 10000 + 1));
    accounts.push_back(make_unique<SavingsAccount>(rand() % 10000 + 1));
}