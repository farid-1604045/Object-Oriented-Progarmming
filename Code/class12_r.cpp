#include<bits/stdc++.h>
using namespace std;
//Using reference
/*
void f(int &n)
{
    n=100;
}
int main()
{
    int i=0;
    f(i);
    cout<<i<<endl;
}
*/
//Using pointer
void f(int *n)
{
    *n=100;
}
int main()
{
    int i=0;
    f(&i);
    cout<<i<<endl;
}
