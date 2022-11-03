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
    dist(int a, int b)
    {
        feet=a;
        inch=b;
    }
    bool operator < (dist d);
    void display()
    {
        cout<<"Feet: "<<feet<<" Inch: "<<inch<<endl;
    }

};
bool dist:: operator < (dist d)
{
    if(feet<d.feet) return true;
    if(feet==d.feet && inch<d.inch) return true;
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
