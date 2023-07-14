#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Test reference and pointer parameters")
{
	int num1 = 1, num2 = 2;
	ref_ptr_params(num1, &num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 10);
}

TEST_CASE("Test my vector size")
{
	Vector v(3);
	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity")
{
	Vector v(3);
	REQUIRE(v.Capacity() == 3 );
}

TEST_CASE("Test my vector class copy")
{
	Vector v1(3);
	Vector v2 = v1;
	v1[0] = 5;
	v2[0] = 10;

	REQUIRE(v1.Size() == v2.Size());
	REQUIRE(v1.Capacity() == v2.Capacity());

	REQUIRE(v1[0] != v2[0]);
}*/

TEST_CASE("Test my vector overwrite existing v2 with v1")
{
	Vector v1(3);
	Vector v2(3);
	v2 = v1;

}