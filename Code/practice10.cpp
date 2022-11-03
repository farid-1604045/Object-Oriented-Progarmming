#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream if1("farid.txt");
    string name;
    int id;
    getline(if1, name);
    cout<<"Name: "<<name<<endl;
    if1>>id;
    cout<<"ID: "<<id<<endl;
    //cout<<"Name: "<<name<<" ID: "<<id<<endl;
    if1.close();
}
