#include<bits/stdc++.h>
using namespace std;

class Complex
{
    float x,y;
public:
    Complex(){};
    Complex(float real, float img)
    {
        x=real;
        y=img;
    }
    //Complex operator+(Complex);
    Complex operator+(int);
    void display()
    {
        cout<<x<<" + j"<<y<<endl<<endl;
    }
};
/*
Complex Complex:: operator+(Complex c)//if we pass value then+(int d)
{
    Complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}*/
Complex Complex:: operator+(int d)//if we pass value then+(int d)
{
    Complex temp;
    temp.x=x+d;
    temp.y=y+d;
    return temp;
}
int main()
{
    Complex C1(2.6,3.4),C3;//C2(3.5,5.5),C4(3.5,4.3),C3;
    //C3=C1+C2+C4;
    C3=C1+10;
    C1.display();
    //C2.display();
    //C4.display();
    C3.display();
}
