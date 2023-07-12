#include<iostream>

using std::cout;

int main() 
{
	//create memory
	int* num_ptr = new int(5);

	//use the memory
	cout<<*num_ptr<<"\n";

	//delete the memory
	delete num_ptr;

	//dynamic array(list) of integers
	int* nums = new int[3]{};
	cout<<nums[0]<<"\n";

	delete nums;

	return 0;
}