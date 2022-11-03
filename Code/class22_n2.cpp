#include<bits/stdc++.h>
using namespace std;

//Pointer to member function

class Simple
{
public:
    int fun(int x, float y)
    {
        return x+int(y);
    }
};

int main()
{
    Simple obj;
    Simple *obj_ptr;

    int (Simple::*ptr)(int,float); //Pointer Declaration

    ptr=&Simple::fun; // Pointing to member function 'fun'

    cout<<(obj.*ptr)(5,6.7)<<endl; //Function call using object
    cout<<(obj_ptr->*ptr)(5,6.7)<<endl; //Function call using object pointer

}
