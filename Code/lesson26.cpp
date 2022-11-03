#include<bits/stdc++.h>
using namespace std;

// Virtual function inherit
class base
{
public:
    virtual void vfunc()
    {
        cout<<"This is base"<<endl;
    }
};
class derived1: public base
{
public:
    void vfunc()
    {
        cout<<"This is derived1"<<endl;
    }
};

class derived2: public derived1
{
public:
    // derived2 inherit virtual function from derived1
    void vfunc()
    {
        cout<<"This is derived2"<<endl;
    }
};

class derived3: public derived2
{
    void vfunc()
    {
        cout<<"This is dervied3"<<endl;
    }
};
int main()
{
    base *p, b;
    derived1 d1;
    derived2 d2;
    derived3 d3;

    p=&b;
    p->vfunc();
    p=&d1;
    p->vfunc();
    p=&d2;
    p->vfunc();
    p=&d3;
    p->vfunc();
}
