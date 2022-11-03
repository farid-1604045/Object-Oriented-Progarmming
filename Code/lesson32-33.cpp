#include<bits/stdc++.h>
using namespace std;

//Template
template <class T> // Erpoer kichu deya jabe na dile error dekhabe
// int i; erokom something kichu dile error dekhabe
// Now if we use
//template<class T1, class T2>
void func(T x, T y)
{
    cout<<"Original: "<<x<<" "<<y<<endl;
    T temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swapping: "<<x<<' '<<y<<endl;
}


/*void func(T1 x, T2 y)
{
    cout<<"Inside template function"<<endl;
    cout<<x<<" "<<y<<endl;
}
void func(int x, int y)
{
    cout<<"Inside int"<<endl;
    cout<<x<<' '<<y<<endl;
}
*/
int main()
{
    func(10,20);
    func(10.3,3.3);
    func('a','b');
    //func("Farid",3);
}
