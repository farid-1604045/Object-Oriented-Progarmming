#include<bits/stdc++.h>
using namespace std;

class number
{
protected:
    int value;
public:
    void set_value(int i)
    {
        value=i;
    }
    virtual void show()=0;
};

class hextype: public number
{
public:
    void show()
    {
        cout<<hex<<value<<endl;
    }
};

class octtype: public number
{
public:
    void show()
    {
        cout<<oct<<value<<endl;
    }
};
int main()
{
    //using pointer
    number *n;
    hextype h;
    octtype o;

    h.set_value(20);
    n=&h;
    n->show();
    //h.show();
    o.set_value(20);
    n=&o;
    n->show();
    //o.show();
}
