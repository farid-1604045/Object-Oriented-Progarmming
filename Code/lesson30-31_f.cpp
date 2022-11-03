#include<bits/stdc++.h>
using namespace std;

// If we want to take input output simultaneously

int main()
{
    fstream outf("student.txt");

    string name, id;

    cout<<"Enter student name: ";
    getline(cin, name);
    outf<<name<<endl;
    cout<<"Enter studnet id: ";
    cin>>id;
    outf<<id<<endl;
    outf.close();

    string n,i;
    fstream f2("student.txt");
    getline(f2, n);
    f2>>i;
    cout<<"Student name: "<<n<<endl;
    cout<<"Student id: "<<i<<endl;
    f2.close();
}
