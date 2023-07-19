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

/*
1-Get v1.elements memory(switch/steal the data and make v1 empty)
2-Get size from v1
3-point v1.elements to nothing(nullptr)
4-set v1 size to 0
*/
Vector::Vector(Vector&& v1) :
 size {v1.size}, elements{v1.elements}//switching v2 to pointer to v1 elements
{
    cout<<"Memory pointer switched "<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

/*
1-Clear/delete original memory from v1
2-Point v2 elements to v1 elements
3-Get size from v1
4-Point v2.elements to nullptr
5-Set v2 size to 0
6-return a self reference
*/
Vector& Vector::operator=(Vector&& v2)
{
    cout<<"Delete memory(move assignment)"<<elements<<"\n";
    delete[] elements;

    elements = v2.elements;
    cout<<"Memory pointer switched "<<elements<<"\n";

    size = v2.size;
    v2.elements = nullptr;
    v2.size = 0;

    return *this;
}

/*
1-make sure that the new size is greater than capacity
2-Create temp memory of new_size allocation
3-copy values from old memory to new memory
4-delete the old memory
5-set elements to temp memory
6-set capacity to new_size
*/
void Vector::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    int* temp = new int[new_size];
    cout<<"Memory (reserve) created "<<temp<<"\n";

    for(auto i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Delete old memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
PUSH BACK
1-if capacity is 0 call Reserve w RESERVE_DEFAULT_SIZE as function argument
2-else if size equal capacity call Reserve w capacity * RESERVE_DEFAULT_MULTIPLIER
3-add value to current elements[SIZE]
4-increment the size
*/
void Vector::PushBack(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] =  value;
    size++;
}


Vector::~Vector()
{
    cout<<"Deleting memory at address: "<<elements<<"\n";
    delete []elements;
}

//FREE FUNCTION not part of the class
Vector get_vector() 
{
    Vector v2(3);
    return v2;
}