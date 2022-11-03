#include<bits/stdc++.h>
using namespace std;

// Memory flow(Compiler ge
int main()
{
    double *p;
    do
    {
        try
        {
            p=new double[50000000];
        }
        catch(bad_alloc ex)
        {
            cout<<"Out of memory"<<endl;
            return 0;
        }
        cout<<"Allocation done!"<<endl;
    }
    while(1);
}
