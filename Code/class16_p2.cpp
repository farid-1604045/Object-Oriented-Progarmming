#include<bits/stdc++.h>
using namespace std;

// 10+C1 Problem solving using friend function
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
    friend Complex operator+(int, Complex);
    void display()
    {
        cout<<x<<" "<<y<<endl<<endl;
    }
};
Complex operator+(int d, Complex c)
{
    Complex temp;
    temp.x = d+c.x;
    temp.y = d+c.y;
    return temp;
}

int main()
{
    Complex C1(1.3,2.4),C3;
    C3=10+C1;
    C1.display();
    C3.display();
}
