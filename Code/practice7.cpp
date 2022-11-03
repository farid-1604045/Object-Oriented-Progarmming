#include<bits/stdc++.h>
using namespace std;

// Binary operator

class Complex
{
    float x,y;
public:
    Complex(){};
    Complex(float a, float b)
    {
        x=a;
        y=b;
    }
    Complex operator+(Complex);
    void display()
    {
        cout<<x<<" + y"<<y<<endl;
    }
};

Complex Complex:: operator+(Complex c)
{
    Complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}

int main()
{
    Complex C1(10.3,20.9), C2(11.3,30.3), C3;
    C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
}
