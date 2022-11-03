#include<bits/stdc++.h>
using namespace std;

// Unary operator

class UnaryOp
{
    int x,y;
public:

    UnaryOp()
    {
        x=0;
        y=0;
    }
    UnaryOp(int a, int b)
    {
        x=a;
        y=b;
    }
    void operator-();
    void display()
    {
        cout<<x<<' '<<y<<endl;
    }
};

void UnaryOp:: operator-()
{
    x=-x;
    y=-x;
}

int main()
{
    UnaryOp obj(10,-20);
    obj.display();
    -obj;
    obj.display();
}
