#include<bits/stdc++.h>
using namespace std;

class parent   //Base Class or Parent Class
{
private:
    int a;
protected:
    int b;
public:
    int c;
};
class child: public parent  //Derived Class or Child Class
{
public:
    void setb(int b)
    {
        parent::b=b;
        this->b=b;
    }
    void getb()
    {
        cout<<b<<endl;
    }
};
int main()
{
    child obj1;
    obj1.setb(5);
    obj1.getb();
}
