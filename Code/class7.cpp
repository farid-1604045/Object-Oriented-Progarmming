#include<bits/stdc++.h>
using namespace std;

/*
int factorial(int n)
{
    int i, ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans*=i;
    }
    return ans;
}

int main()
{
    int n,r,fact_n,fact_r,fact_nr,nCr;
    cin>>n>>r;
    fact_n=factorial(n);
    fact_r=factorial(r);
    fact_nr=factorial(n-r);
    nCr=fact_n/(fact_r*fact_nr);
    cout<<nCr<<endl;
}*/
/*
const double PI = acos(-1);

int string_len(string &test)
{
    int len=0;
    while(test[len]!='\0')
    {
        len++;
    }
    return len;
}

int main()
{
    string test = "Quarantine Home";
    cout<<string_len(test)<<endl;
    cout<<PI<<endl;
}
*/

int main()
{
    string str1="Hello\0World";
    cout<<str1<<endl;
    string str2="Hello world";
    str2[3]='\0';
    cout<<str2<<endl;
    cout<<str2.c_str()<<endl;
}
