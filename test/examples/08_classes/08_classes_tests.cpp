#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test account get balance initialization")
{
	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test account get balance with param constructor")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account deposit")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test account deposit value less than 0")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account withdraw")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
	
	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);
}

TEST_CASE("Test account withdraw with amount less than 0")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-25);
	REQUIRE(account.get_balance() == 100);
}