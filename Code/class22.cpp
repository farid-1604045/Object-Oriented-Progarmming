#include<bits/stdc++.h>
using namespace std;

// Friend Class

class first_class
{
    int x;
public:
    first_class(int value)
    {
        x=value;
    }
    // Making friend of second class
    friend class second_class;
};

class second_class
{
public:
    void Show(first_class obj)
    {
        cout<<obj.x<<endl;
    }
};
int main()
{
    first_class obj_first(5);
    second_class obj_second;
    obj_second.Show(obj_first);
}
