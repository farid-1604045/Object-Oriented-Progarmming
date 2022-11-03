#include<bits/stdc++.h>
using namespace std;
/*
namespace scope
{
    int a,b;
    int num=5;
    int func()
    {
        a=6,b=7;
        cout<<a+b<<endl;
    }
}
using namespace scope;
int main()
{
    cout<<num<<endl;
    func();
}*/

class test
{
public:
    int x;
    void func()
    {
        cout<<"X="<<x<<endl;
    }
};
int main()
{
    int test::*ptr;
    ptr=&test::x; // Pointer point to class member

    test obj;
    test *obj_ptr=&obj; // Pointer object to member

    obj.*ptr=5; // Object point to member
    obj.func();
    obj_ptr->*ptr=15;// Pointer object to member
    obj.func();
}

