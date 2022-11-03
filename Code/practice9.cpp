#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream of1("farid.txt");
    string name;
    int id;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    of1<<name<<endl;

    cout<<"Enter your ID: "<<endl;
    cin>>id;
    of1<<id<<endl;

    of1.close();

}
