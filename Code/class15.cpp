#include<bits/stdc++.h>
using namespace std;

class comp
{
    int real, img;
public:
    comp()
    {
        real = 1;
    }
    comp(float r=3)
    {
        real=r;
    }
};

int main()
{
    comp a,b;//Ambiguous
}
