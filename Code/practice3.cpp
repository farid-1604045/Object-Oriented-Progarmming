#include<bits/stdc++.h>
using namespace std;

// Friend Function

class MyClass
{
    int a,b;
public:
    void set_value(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    friend int Sum(MyClass obj);
};

int Sum(MyClass obj)
{
    return obj.a+obj.b;
}
int main()
{
    MyClass obj;
    obj.set_value(10,15);
    cout<<"Sum: "<<Sum(obj)<<endl;
}
