#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cin;
using std::cout;

int main()
{
	BankAccount account(100);

	run_menu(account);

	return 0;
}