#include "atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<vector>

using std::cin; using std::cout;
using std::make_unique; using std::unique_ptr; 
using std::vector;


int main()
{
    std::vector<unique_ptr<BankAccount>> accounts;

	accounts.push_back(make_unique<CheckingAccount>(100));
	accounts.push_back(make_unique<SavingsAccount>(300));

	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>(200);
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>(400);

	accounts.push_back(std::move(checking));
	accounts.push_back(std::move(savings));

	//after the move checking and savings unique_ptrs are invalidated
	//they don't referency any data; if you use them program generates memory error

	run_menu(accounts);

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	return 0;
}