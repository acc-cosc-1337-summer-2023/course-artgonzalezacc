#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test account get balance initialization")
{
	SavingsAccount account;

	REQUIRE(account.get_balance() == 5);
}

TEST_CASE("Test account get balance with param constructor")
{
	CheckingAccount account(100);

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account deposit")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 105);

	account.deposit(50);
	REQUIRE(account.get_balance() == 155);
}

TEST_CASE("Test account deposit value less than 0")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account withdraw")
{
	SavingsAccount account(100);
	REQUIRE(account.get_balance() == 105);
	
	account.withdraw(25);
	REQUIRE(account.get_balance() == 80);
}

TEST_CASE("Test account withdraw with amount less than 0")
{
	CheckingAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-25);
	REQUIRE(account.get_balance() == 100);
}