#include<bits/stdc++.h>
using namespace std;

class FirstClass;
class SecondClass;

class FirstClass
{
    int f;
public:
    FirstClass(int f)
    {
        this->f=f;
    }

    // Friend with FirstClass
    friend int Sum(FirstClass obj_first, SecondClass obj_second);
};

class SecondClass
{
    int s;
public:
    SecondClass(int s)
    {
        this->s=s;
    }

    // Friend with SecondClass
    friend int Sum(FirstClass obj_first, SecondClass obj_second);

};

//Function Definition

int Sum(FirstClass obj_first, SecondClass obj_second)
{
    return obj_first.f + obj_second.s;
}

int main()
{
    FirstClass obj_first(-10);
    SecondClass obj_second(15);
    cout<<Sum(obj_first, obj_second)<<endl; //Function Call
}
