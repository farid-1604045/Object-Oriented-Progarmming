#include<bits/stdc++.h>
using namespace std;

// Friend Function

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

int main()
{
    Complex C1(2.5,4.5), C2(4.2,5.4), C3;
    C3 = 10+C1;
    C1.display();
    C3.display();
}
