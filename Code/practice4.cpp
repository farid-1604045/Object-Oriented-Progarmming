#include<bits/stdc++.h>
using namespace std;

class building
{
protected:

    int stores,floors,rooms;
public:
    int getValue(int a, int b, int c)
    {
        stores=a;
        floors=b;
        rooms=c;
    }
    void show()
    {
        cout<<stores<<" "<<floors<<" "<<rooms<<endl;
    }
};

class house: public building
{
protected:
    int bedroom,bathroom;
public:
    int getValue1(int a1, int b1)
    {
        bedroom=a1;
        bathroom=b1;
    }
    void show1()
    {
        cout<<bathroom<<" "<<bedroom<<endl;
    }
};

class office: public building
{
protected:
    int telephone,employee;
public:
    int getValue2(int a2, int b2)
    {
        telephone=a2;
        employee=b2;
    }
    void show2()
    {
        cout<<telephone<<" "<<employee<<endl;
    }
};

int main()
{
    office obj;
    obj.getValue(1,3,5);
    obj.getValue2(5,6);
    obj.show();
    obj.show2();
}
