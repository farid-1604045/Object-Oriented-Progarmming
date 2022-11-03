#include<bits/stdc++.h>
using namespace std;

//using macro
/*
#define sqr(a) ((a)*(a))

int main()
{
    cout<<sqr(2)<<endl;
}
*/
/*
class rectangle
{
private:
    double h,w;
public:
    int area()
    {
        cin>>h>>w;
        return h*w;
    }
};


int main()
{
   rectangle area1;
   cout<<area1.area()<<endl;
}
*/
/*
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int add(double a, double b)
{
    return a+b;
}

int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(3,1,-5)<<endl;
    cout<<add(2.5,3.5)<<endl;
}
*/

// Circle, Rectangle Area, Triangle
/*
const double PI=acos(-1);
double area(double r)
{
    return PI*r*r;
}
double area(double a, double b)
{
    return a*b;
}
double area(double a, double b, double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    cout<<setprecision(2)<<fixed;
    cout<<"Circle Area: "<<area(2)<<endl;
    cout<<"Rectangle Area: "<<area(2,5)<<endl;
    cout<<"Triangle Area: "<<area(2,4,5)<<endl;
}
*/
/*
struct student
{
    char name[20];
    int roll_numbers;
    float total_marks;
};

int main()
{
    struct student A; //object declaration
    strcpy(A.name,"John");
    A.roll_numbers=56;
    A.total_marks=595.5;
}
*/

class BOX
{
    double length,breadth,height;

public:
    void input_value()
    {
        cout<<"Enter three sides of a box: "<<endl;
        cin>>length>>breadth>>height;
    }
    void print_value()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
    }
    double volume()
    {
        double v=length*breadth*height;
        return v;
    }
};

int main()
{
    BOX mybox;
    mybox.input_value();
    mybox.print_value();
    cout<<mybox.volume()<<endl;
}
