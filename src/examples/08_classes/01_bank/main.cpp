#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
    std::vector<BankAccount*> accounts;
	CheckingAccount checking(100) ;

	accounts.push_back(&checking);

	SavingsAccount savings(300);
	accounts.push_back(&savings);

	run_menu(accounts);

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	return 0;
}