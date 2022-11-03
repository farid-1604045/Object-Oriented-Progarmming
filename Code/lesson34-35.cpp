#include<bits/stdc++.h>
using namespace std;

void fun()
{
    cout<<"Inside fucntion block"<<endl;
    throw 5;
}
int main()
{
    cout<<"Start"<<endl;
    try
    {
        cout<<"Inside try block"<<endl;
        fun();
    }
    catch (int x)
    {
        cout<<"Caught integer exception: "<<endl;
    }
}
