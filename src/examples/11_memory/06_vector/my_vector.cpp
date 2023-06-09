#include "my_vector.h"

using std::cout;

/*
CONSTRUCTOR
1. initialize the size
2. initialize the capacity with size value
3. create dynamic memory of size value in elements
*/
Vector::Vector(int size) :
    elements{new int[size]}
{
    cout<<"Created memory at address: "<<elements<<"\n";
    capacity = size;
}

/*
COPY CONSTRUCTOR
1. Copy v1.size and v1.capacity to v2.size to v2.capacity
2. Create new memory for v2
3. Copy element values from v1 to v2
*/
Vector::Vector(const Vector& v1) :
    size{v1.size}, capacity{v1.capacity}, elements{new int[v1.capacity]}
{
    cout<<"Created memory(copy constructor) at:  "<<elements<<"\n";

    for(auto i=0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

/*
COPY ASSIGNMENT
1. Create temp memory for v2
2. Copy values from v1 to v2 temp memory
3. Delete v2.elements
4. Point v2 elements to temp memory
5. Set v2.size to v1.size
6-return a self reference

*/
Vector& Vector::operator=(const Vector& v1)
{
    int* temp = new int[v1.size];

    for(auto i=0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"Deleting memory(copy assignment) at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"Created memory(copy assignment) at "<<elements<<"\n";
    temp = nullptr;

    size = v1.size;

    return *this;
}

Vector::~Vector()
{
    cout<<"Deleting memory at address: "<<elements<<"\n";
    delete []elements;
}

