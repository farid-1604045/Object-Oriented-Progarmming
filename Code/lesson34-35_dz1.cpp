#include<bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice<0)
        {
            throw "negative";
        }
        else if (choice>0)
        {
            throw "positive";
        }
    }
    catch(...)
    {
        cout<<"Some non-zero exception occurred"<<endl;
    }
}
