#include<bits/stdc++.h>
using namespace std;
// This pointer

class A
{
    int x=7;
public:
    void set_x(int &x)
    {
        x=10;
        cout<<this->x<<endl;
        cout<<x<<endl;
    }
};
int main()
{
    A obj;
    int i=0;
    obj.set_x(i);
}
