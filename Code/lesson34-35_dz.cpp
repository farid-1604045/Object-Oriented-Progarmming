#include<bits/stdc++.h>
using namespace std;

// Division-by-zero custom exception

double Divide(double a, double b)
{
    if(b==0)
    {
        // runtime_error(this is reference)
        throw runtime_error("Error: Cannot divide by zero");
    }
    return a/b;
}

int main()
{
    try
    {
        double res = Divide(5,2);
        cout<<"Division result: "<<res<<endl;

        res = Divide(5,0);
        cout<<"Division result: "<<res<<endl;
    }
    catch(runtime_error &e)
    {
        cout<<e.what()<<endl;
    }

}
