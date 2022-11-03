#include<bits/stdc++.h>
using namespace std;

// Defining a Pointer of Class Type

class Simple
{
public:
    int x;
};
int main()
{
    Simple obj;
    obj.x=5;

    Simple *ptr; //Declaring a pointer of type
    ptr = &obj; //Pointer to obj

    //Can access the member using any of the following method
    cout<<obj.x<<endl;
    cout<<ptr->x<<endl;
    //cout(*ptr).x<<endl;

}
