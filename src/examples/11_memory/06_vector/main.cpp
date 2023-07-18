#include "my_vector.h"
//
using std::cout;

int main()
{
    /*cout<<"Create Vector v on the stack\n";
    Vector v(3);//on the heap
    cout<<"Vector v removed from the stack\n";*/
    int num = 5;//num is LVALUE
    int& num_ref = num;
    //5 = num; 5 is rvalue
    
    return 0;
}

