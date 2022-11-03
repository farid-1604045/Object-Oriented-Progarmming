#include<bits/stdc++.h>
using namespace std;

class dist
{
    int feet, inch;
public:
    dist()
    {
        feet=0;
        inch=0;
    }
    dist(int x, int y)
    {
        feet=x;
        inch=y;
    }
    void display()
    {
        cout<<"Feet: "<<feet<<" Inch: "<<inch<<endl;
    }

    friend bool operator < (dist d1, dist d2);
};

bool operator < (dist d1, dist d2)
{
    if(d1.feet<d2.feet) return true;
    if(d1.feet==d2.feet&&d1.inch<d2.inch) return true;
    else return false;
}

int main()
{
    dist d1(5,10), d2(5,11);
    d1.display();
    d2.display();

    if(d1<d2)
    {
        cout<<"D1 is less than D2"<<endl;
    }
    else
    {
        cout<<"D2 is less than D1"<<endl;
    }
}
