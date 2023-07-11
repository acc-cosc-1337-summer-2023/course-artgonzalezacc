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

	return 0;
}