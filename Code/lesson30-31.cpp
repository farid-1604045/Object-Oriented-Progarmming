#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream outf("student.txt");

    string name, id;

    cout<<"Enter student name: ";
    getline(cin, name);
    outf<<name<<endl;
    cout<<"Enter studnet id: ";
    cin>>id;
    outf<<id<<endl;
    outf.close();

    ifstream if1("student.txt");

    getline(if1, name);
    //if1>>name;
    if1>>id;

    cout<<"Student name: "<<name<<endl;
    cout<<"Student id: "<<id<<endl;
    if1.close();
}
