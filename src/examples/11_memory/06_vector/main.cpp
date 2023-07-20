#include "my_vector.h"
//
using std::cout;

int main()
{
    Vector v(3);
    v.PushBack(5);
    cout<<v[0]<<"\n";

    v.PushBack(10);
    cout<<v[1]<<"\n";

    return 0;
}

