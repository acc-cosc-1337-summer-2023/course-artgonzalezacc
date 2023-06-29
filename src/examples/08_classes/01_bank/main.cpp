#include "atm.h"
#include "customer.h"
#include<iostream>
#include<vector>
#include<time.h>

using std::cin; using std::cout;
using std::make_unique; using std::unique_ptr; 
using std::vector;


int main()
{
	srand(time(NULL));
	vector<unique_ptr<Customer>> customers;

	customers.push_back(make_unique<Customer>());
	customers.push_back(make_unique<Customer>());
	customers.push_back(make_unique<Customer>());
	customers.push_back(make_unique<Customer>());
	customers.push_back(make_unique<Customer>());
	//after the move checking and savings unique_ptrs are invalidated
	//they don't referency any data; if you use them program generates memory error

	run_menu(customers);

	return 0;
}