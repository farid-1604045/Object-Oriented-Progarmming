#include<bits/stdc++.h>
using namespace std;

class Simple
{
public:
    int x,y;
};
int main()
{
    Simple obj;
    obj.x=5;
    obj.y=10;

    int Simple::*ptr; // Declaring a pointer of type 'int'

    ptr=&Simple::x; //Pointing to member x
    cout<<obj.*ptr<<endl; // Output: 5

    ptr=&Simple::y; // Pointing to member y
    cout<<obj.*ptr<<endl; //Output: 10
}
