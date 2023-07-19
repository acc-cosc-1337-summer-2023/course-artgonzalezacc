//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//constructor
    Vector(const Vector& v1);//Rule 1 of 3 in Legacy C++: Copy constructor
    Vector& operator=(const Vector& v);//Rule 2 of 3 in Legacy C++: copy assignment
    Vector(Vector&& v);//Rule 4 of 5 modern C++ move constructor
    Vector& operator=(Vector&& v);//Rule 5 of 5 modern C++ move assignment
    int Size(){return size;}
    int Capacity(){return capacity; }
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    ~Vector();//destructor
    
private:
    int size{0}; //current size of list and current index
    int capacity; //total elements the list can hold
    int* elements;//pointer to a list on the heap/free store
    
};

#endif

Vector get_vector();