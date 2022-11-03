#include<bits/stdc++.h>
using namespace std;

int main()
{
    float pi=22.0/7.0;
    //cout<<setprecision(3)<<fixed<<a<<endl;
    cout<<"Value of pi: "<<endl;
    for(int i=1; i<=10; i++)
    {
        cout.width(i+1);
        cout.precision(i);
        cout<<fixed<<pi<<endl;
    }
}
