#include<bits/stdc++.h>
using namespace std;

class parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
};

class child: private parent
{
public:
    void setb(int b)
    {
        this->b=b;
    }
    void getb()
    {
        cout<<b<<endl;
    }
};

int main()
{
    child obj;
    obj.setb(5);
    obj.getb();
}
