#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
    float avg_cgpa;
    int number_of_term;

public:
    void initialize(int new_id)
    {
        id=new_id;
        avg_cgpa=0.0;
        number_of_term=0;
    }
    void show_cgpa()
    {
        cout<<"Avg="<<avg_cgpa<<endl;
    }
    void update_cgpa(float new_gpa)
    {
        float total_cgpa=avg_cgpa*number_of_term;
        total_cgpa+=new_gpa;
        number_of_term++;
        avg_cgpa=total_cgpa/number_of_term;
    }
};

int main()
{
    student s1;
    s1.initialize(1604045);
    s1.update_cgpa(4.00);
    s1.show_cgpa();
}
