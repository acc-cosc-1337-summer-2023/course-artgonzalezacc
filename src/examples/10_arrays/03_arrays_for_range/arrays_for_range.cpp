//cpp
#include "arrays_for_range.h"

ArrayList::ArrayList(int* array_list, int capacity) :
    elements(array_list)
{
    this->capacity = capacity;
}

void ArrayList::Add(int value)
{
    if(current_index < capacity)
    {
        elements[current_index] = value;
        current_index++;
    }
}