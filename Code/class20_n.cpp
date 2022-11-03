#include<bits/stdc++.h>
using namespace std;

class Base
{
    int x;
public:
    Base()
    {
        cout<<"No value for X in base class"<<endl;
    }
    Base(int x)
    {
        this->x=x;
        cout<<"X="<<x<<" in base class"<<endl;
    }
};
class Derived:public Base
{
    int y;
public:
    Derived(int x):Base(x)
    {
        cout<<"No value for Y in derived class"<<endl;
    }
    Derived(int x, int y):Base(x)
    {
        this->y=y;
        cout<<"Y="<<y<<" is derived class"<<endl;
    }
};
int main()
{
    Derived ob1(5);
    cout<<"\n........\n"<<endl;
    Derived ob2(5,7);
}
