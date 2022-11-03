#include<bits/stdc++.h>
using namespace std;

// Overloading Binary Operators
class Complex
{
    float x,y;
public:
    Complex(){};
    Complex(float real, float img)
    {
        x=real, y=img;
    }
    Complex operator+(Complex);
    void display()
    {
        cout<<x<<" + j"<<y<<endl;
    }
};
Complex Complex:: operator+(Complex c)
{
    Complex temp;
    temp.x = x+c.x;
    temp.y = y+c.y;
    return temp;
}
int main()
{
    Complex C1(2.5, 3.5), C2(1.6, 2.7), C3;

    C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
}
