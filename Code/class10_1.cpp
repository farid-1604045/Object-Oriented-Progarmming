#include<bits/stdc++.h>
using namespace std;

// Static member function
class test
{
    int code;
    static int count;
public:
    void setcode()
    {
        count++;
        code=count;
    }
    void showcode()
    {
        cout<<"Object number: "<<code<<endl;
    }
    static void showcount()
    {
        cout<<"Count: "<<count<<endl;
    }
};
int test :: count;
int main()
{
    test t1,t2,t3;
    t1.setcode();
    t2.setcode();
    t3.setcode();

    t1.showcode();
    t2.showcode();
    t3.showcode();
    test:: showcount();
}
