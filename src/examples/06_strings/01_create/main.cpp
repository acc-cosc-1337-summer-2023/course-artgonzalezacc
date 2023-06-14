#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";

    cout<<lang<<"\n";
    cout<<"Memory address of C in C++: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Memory address of + in C++: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Memory address of + in C++: "<<static_cast<void*>(&lang[2])<<"\n";
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";
    lang.append(" ");
    lang.append("i");
    lang.append("s");
    lang.append(" ");
    lang.append("a");
    lang.append(" ");
    lang.append("b");
    lang.append("e");
    lang.append("a");
    lang.append("s");
    lang.append("t");
    lang.append("!");
    cout<<"Memory address of + in C++: "<<static_cast<void*>(&lang[14])<<"\n";

    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    lang.append("!");

    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    return 0;
}