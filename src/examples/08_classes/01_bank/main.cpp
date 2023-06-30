#include "atm.h"
#include "atm_data.h"
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
	/*vector<Customer> customers;

	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());*/

	//atm_data.save_customers(customers);
	//after the move checking and savings unique_ptrs are invalidated
	//they don't referency any data; if you use them program generates memory error
	ATMData atm_data;

	run_menu(atm_data.get_customers());

	return 0;
}