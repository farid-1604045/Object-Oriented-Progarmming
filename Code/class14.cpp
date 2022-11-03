#include<bits/stdc++.h>
using namespace std;

// Copy Constructor
class Complex
{
    float real, img;
public:
    Complex()//Default Constructor
    {
        real = 0;
        img = -1;
    }
    Complex(Complex &c)
    {
        real = 4;
        img = c.img;
    }
    void print()
    {
        cout<<real<<' '<<img<<endl;
    }
};
int main()
{
    Complex c1,c2(c1);
    c1.print();
    //Complex c2(c1);
    c2.print();
    c2=c1;
    c2.print();
}
