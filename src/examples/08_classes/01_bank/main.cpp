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
	std::vector<BankAccount> accounts;
	
	accounts.push_back(CheckingAccount(100));

	accounts.push_back(SavingsAccount(300));

	run_menu(accounts);

	cout<<accounts[0].get_balance()<<"\n";
	cout<<accounts[0].get_balance()<<"\n";

	return 0;
}