#include<bits/stdc++.h>
using namespace std;

// Read file
int main()
{
    string name, id;
    ifstream f1("student.txt");
    getline(f1, name);
    f1>>id;
    cout<<name<<" "<<id<<endl;
}
