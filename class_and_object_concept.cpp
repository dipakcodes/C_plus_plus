#include<iostream>
using namespace std;
class student
{
    string name;
    int roll_number;
    float marks;
    public:
    void insertdata(string a, int b, float c);
    void displaydata()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Roll Number: "<<roll_number<<"\n";
        cout<<"Marks: "<<marks<<"\n\n\n";
    }
};
void student::insertdata(string a, int b, float c)
{
    name = a;
    roll_number = b;
    marks = c;
}
int main()
{
    string student_name;
    int student_roll;
    float student_marks;
    student x;
    cout<<"Enter name:\n";
    cin>>student_name;
    cout<<"Enter Roll Number:\n";
    cin>>student_roll;
    cout<<"Enter marks:\n";
    cin>>student_marks;
    cout<<"student Info:\n";
    x.insertdata(student_name, student_roll, student_marks);
    x.displaydata();
    return 0;
}