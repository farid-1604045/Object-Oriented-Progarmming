#include<bits/stdc++.h>
using namespace std;

/*int func(int &new_x)
{
    new_x += 10;
    return new_x;
}*/

class first_class
{
    int x=6,y=7;
    double z=9;
public:
    void set_xyz()
    {
        cout<<x<<" "<<y<<" "<<z;
    }
};
int main()
{
    /* Reference
    //if we change the value of res it actually change the value
    //of dp[0][3]. This is reference
    int dp[0][3];
    dp[0][3]=5;
    int &res = dp[0][3];
    res=res+10;
    int res1 = dp[0][3];
    cout<<res1<<endl;
    cout<<res<<endl;


    int dp[0][3];
    dp[0][3] = 7;
    int *res = &dp[0][3];
    cout<<*res<<endl;
    */

    /* int x = 5;
    cout<<func(x)<<endl;
    */

    first_class obj;
    obj.set_xyz();
    return 0;

}
/*
namespace par
{
    int num=5;
    void func()
    {
        cin>>num;
    }
    namespace child
    {
        int num=10;
    }
}
int main()
{
    par::child::num;
}
*/
