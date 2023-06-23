#include<iostream>
#include<memory>

using std::cout;
using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<int> num = make_unique<int>(25);
	cout<<*num<<"\n";

	return 0;
}