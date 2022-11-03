#include<bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    BaseClass() //Constructor
    {
        cout<<"This is the BaseClass Constructor"<<endl;
    }
    ~BaseClass() //Constructor
    {
        cout<<"This is the BaseClass Destructor"<<endl;
    }
};

// DerivedClass declaration

class DerivedClass: public BaseClass
{
public:
    DerivedClass() //Constructor
    {
        cout<<"This is the DerivedClass Constructor"<<endl;
    }
    ~DerivedClass()
    {
        cout<<"This is the DerivedClass Destructor"<<endl;
    }
};
int main()
{
    DerivedClass obj;

}
