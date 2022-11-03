#include<bits/stdc++.h>
using namespace std;

// Constructor overloading
class Complex
{
    float real, img;
public:
    Complex()
    {
        real=5;
        img=-1;
    }
    Complex(float x)
    {
        real=img=x;
    }
    Complex(float x, float y)
    {
        real=x;
        img=y;
    }
    Complex(Complex &c)
    {
        real=c.real;
        img=c.img;
    }
    void print()
    {
        cout<<real<<' '<<img<<endl;
    }
};
int main()
{
    Complex c1,c2(7),c3(4,8),c4(c2);
    c1.print();
    c2.print();
    c3.print();
    c4.print();
}
