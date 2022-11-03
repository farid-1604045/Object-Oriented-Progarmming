#include<bits/stdc++.h>
using namespace std;

class Shape
{
protected:
    int a,b;
    float c;
public:
    void set_value(int x, int y)
    {
        a=x;
        b=y;
    }
    void set_value(float x)
    {
        c=x;
    }
    virtual void Area()=0;
};
class Rectangle: public Shape
{
/*private:
    int l;
    int h;*/
public:
    /*Rectangle(int x, int y)
    {
        l=x;
        h=y;
    }*/
    void Area()
    {
        //cout<<"Area of a triangle is: "<<(l*h)<<endl;
        cout<<"Area of a triangle is: "<<(a*b)<<endl;
    }
};
class Circle: public Shape
{
/*private:
    float r;*/
public:
    /*Circle(float x)
    {
        r=x;
    }*/
    void Area()
    {
        //cout<<"Area of a circle is: "<<(3.1415*r*r)<<endl;
        cout<<"Area of a circle is: "<<(3.1416*c)<<endl;
    }
};

int main()
{
    Shape *s;
    Rectangle r;
    Circle c;
    //r.Rectangle(20,10);
    r.set_value(10,20);
    s=&r;
    s->Area();
    c.set_value(2.00);
    s=&c;
    s->Area();
    //s=&r;
    //s=new Rectangle(10,20);
    //s->Area();
    //c.Circle(2.0);
    //s=&c;
    //s=new Circle(2.0);
    //s->Area();
    return 0;
}
