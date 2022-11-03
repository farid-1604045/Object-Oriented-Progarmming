#include<bits/stdc++.h>
using namespace std;

// Inline funciton

inline double cube(double x)
{
    return x*x*x; //but in case of macros
                  //
}
int main()
{
    cout<<cube(3.0)<<endl;
    cout<<cube(1.5+1.5)<<endl;// in macro 1.5+1.5*1.5+1.5...
}
/*
int string_len(string &str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}
*/
// Constant Argument
/*
int string_len(const string &str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}
*/
/*
int main()
{
    string test = "Quarantine";
    cout<<string_len(test)<<endl;
}
*/
