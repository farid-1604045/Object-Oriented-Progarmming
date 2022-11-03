#include<bits/stdc++.h>
using namespace std;

// Overloading Unary Operators
class UnaryOP
{
    int x,y,z;
public:
    UnaryOP()
    {
        x=0;
        y=0;
        z=0;
    }
    UnaryOP(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void operator-();
    void display()
    {
        cout<<x<<' '<<y<<' '<<z<<endl;
    }
};
void UnaryOP::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    UnaryOP a(10,-20,30);
    a.display();
    -a;
    a.display();
}
