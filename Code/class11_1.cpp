#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    double length, height;
public:
    void take_input()
    {
        cout<<"Enter length and height : ";
        cin>>length>>height;
    }
    friend class Rectangle_friend;
};
class Rectangle_friend
{
public:
    void display(Rectangle r)
    {
        cout<<"Displaying by using friend class: ";
        cout<<r.height<<" "<<r.length<<endl;
    }
    void area(Rectangle r)
    {
        cout<<"Area: "<<r.length*r.height<<endl;
    }
};
int main()
{
    Rectangle a;
    a.take_input();
    Rectangle_friend b;
    b.display(a);
    b.area(a); // Calculating area using friend class
}
