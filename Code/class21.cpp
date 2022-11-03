#include<bits/stdc++.h>
using namespace std;

// Friend Function

class MyClass
{
private:
    int a,b;
public:
    MyClass(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    friend int Sum(MyClass m);  //Declaration
};

int Sum(MyClass m)
{
    return m.a+m.b;
}

int main()
{
    MyClass obj(10, 15);
    cout<<Sum(obj)<<endl;
}

