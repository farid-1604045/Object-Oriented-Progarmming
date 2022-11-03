#include<bits/stdc++.h>
using namespace std;

int cnt=0;
class comp
{
public:
    comp()
    {
        cnt++;
        cout<<"\nNo. of objects created "<<cnt;
    }
    ~comp()
    {
        cnt--;
        cout<<"\nNo. of objects destroyed "<<cnt;
    }
};
int main()
{
    comp a1,a2,a3,a4;
    {
        cout<<"\n\n Enter block"<<endl;
        comp a5;
    }
    {
        cout<<"\n\n Enter block"<<endl;
        comp a6;
    }
    cout<<"\n Re-Enter into Main"<<endl;
}
