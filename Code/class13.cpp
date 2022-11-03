#include<bits/stdc++.h>
using namespace std;
//Parameterized Constructors

class integer
{
    int a,b;
public:
    integer();
    integer(int x, int y)
    {
        a=x,b=y;
    }
    void print()
    {
        cout<<a<<' '<<b<<endl;
    }
};
integer::integer()
{
    a=2,b=4;
}
int main()
{
    integer int1;
    int1.print();
    int1=integer(3,4);

    integer int2(2,100);

    int1.print();
    int2.print();
    int1.print();
}
