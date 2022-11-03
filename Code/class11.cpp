#include<bits/stdc++.h>
using namespace std;

// Calculating area using friend
class Rectangle
{
    double length, height;
public:
    void take_input()
    {
        cout<<"Enter length and height : ";
        cin>>length>>height;
    }
    friend void area(Rectangle r);// Declaration of friend function

};
// Accessing private members using friend function
void area(Rectangle r)
{
    cout<<"Area: "<<r.length*r.height<<endl;
}
int main()
{
    Rectangle a;
    a.take_input();
    area(a);
}
