
#include<bits/stdc++.h>
using namespace std;

// Friend Function Overloading

class Complex
{
    float x,y;
public:
    Complex() {};
    Complex(float real, float img)
    {
        x=real, y=img;
    }
    friend Complex operator+(int, Complex);
    friend Complex operator+(Complex, int);
    friend Complex operator+(Complex, Complex);

    void display()
    {
        cout<<x<<" + j"<<y<<endl;
    }

};
Complex operator+(int d, Complex c)
{
    Complex temp;
    temp.x=d+c.x;
    temp.y=d+c.y;
    return temp;
}
Complex operator+(Complex c, int d)
{
    Complex temp;
    temp.x=c.x+d;
    temp.y=c.y+d;
    return temp;
}
Complex operator+(Complex d, Complex c)
{
    Complex temp;
    temp.x=d.x+c.x;
    temp.y=d.y+c.y;
    return temp;
}

int main()
{
    Complex C1(2.5,4.5), C2(4.2,5.4), C3;
    C3 = 10+C1;
    C3.display();
    C3 = C1+10;
    C3.display();
    C3 = C1+C2;
    C3.display();
    //C1.display();
    //C3.display();
}
