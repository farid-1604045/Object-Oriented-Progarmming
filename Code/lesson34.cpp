// Simple try catch
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Start"<<endl;
    try{
    cout<<"Inside try block"<<endl;
    throw 5;
    }
    catch (int x)
    {
        cout<<"Caught integer exception: "<<x<<endl;
    }
}
