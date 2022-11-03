#include<bits/stdc++.h>
using namespace std;

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
    friend Complex operator+(Complex,Complex);
    friend Complex operator+(Complex, int);

    void display()
    {
        cout<<x<<" "<<y<<endl<<endl;
    }
};
Complex operator+(int d, Complex c)
{
    Complex temp;
    temp.x=d+c.x;
    temp.y=d+c.y;
    return temp;
}
Complex operator+(Complex c, Complex d)
{
    Complex temp;
    temp.x=c.x+d.x;
    temp.y=c.y+d.y;
    return temp;
}
Complex operator+(Complex c, int d)
{
    Complex temp;
    temp.x=c.x+d;
    temp.y=c.y+d;
    return temp;
}
int main()
{
    Complex C1(1.3,3.3),C2(3.3,5.3),C3,C4(1.2,3.3);
    C3=10+C1;
    C3.display();
    C3=C1+10;
    C3.display();
    C3=C1+C2;
    C3.display();
    C3=10+C1+C4+10;
    C3.display();

}
