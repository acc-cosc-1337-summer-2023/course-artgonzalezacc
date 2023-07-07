//header array for ranged loops with auto by value and auto by reference
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

class ArrayList
{
public:
    ArrayList(int* array_list, int size);
    int Capacity()const{return capacity; }
    int Size()const{return current_index;}
    void Add(int value);

private:
    int capacity;
    int current_index{0};
    int * elements;
};

#endif