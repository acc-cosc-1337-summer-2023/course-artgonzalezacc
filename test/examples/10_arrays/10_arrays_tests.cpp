#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_for_range.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test arraylist capacity")
{
	const int SIZE = 3;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Capacity() == 3);
}

TEST_CASE("Test arraylist size")
{
	const int SIZE = 3;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);
}

TEST_CASE("Test arraylist Add")
{
	const int SIZE = 5;
	int list[SIZE];

	ArrayList array_list(list, SIZE);
	REQUIRE(array_list.Size() == 0);

	array_list.Add(8);

	REQUIRE(array_list.Size() == 1);

	array_list.Add(5);
	REQUIRE(array_list.Size() == 2);

	array_list.Add(20);
	REQUIRE(array_list.Size() == 3);
}
