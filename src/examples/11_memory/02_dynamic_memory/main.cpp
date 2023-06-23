#include<iostream>

using std::cout;

int main() 
{
	//1--create memory
	int* int_ptr = new int(10);//creates memory on the heap dynamically
	//2-use memory
	cout<<*int_ptr<<"\n";
	//3-free or delete memory from the heap/free store
	delete int_ptr;
	
	return 0;
}