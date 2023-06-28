#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<memory>

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test account get balance initialization")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();

	REQUIRE(account->get_balance() == 5);
}

TEST_CASE("Test account get balance with param constructor")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);

	REQUIRE(account->get_balance() == 100);
}

TEST_CASE("Test account deposit")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);
	
	REQUIRE(account->get_balance() == 105);

	account->deposit(50);
	REQUIRE(account->get_balance() == 155);
}

TEST_CASE("Test account deposit value less than 0")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);
	REQUIRE(account->get_balance() == 100);

	account->deposit(-50);
	REQUIRE(account->get_balance() == 100);
}

TEST_CASE("Test account withdraw")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);
	REQUIRE(account->get_balance() == 105);
	
	account->withdraw(25);
	REQUIRE(account->get_balance() == 80);
}

TEST_CASE("Test account withdraw with amount less than 0")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);
	REQUIRE(account->get_balance() == 100);

	account->withdraw(-25);
	REQUIRE(account->get_balance() == 100);
}