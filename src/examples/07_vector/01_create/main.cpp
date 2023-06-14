#include<vector>
#include<iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums{1, 10, 7};

    cout<<nums[0]<<"\n";
    nums[0] =  5;
    cout<<nums[0]<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";

    nums.push_back(20);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";

    nums.push_back(15);
    nums.push_back(11);
    nums.push_back(21);

    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";

    return 0;
}