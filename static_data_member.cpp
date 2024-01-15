#include<iostream>
using namespace std;
class Employee
{
    int id;
    int static count;
    //int count = 0
    public:
    void setdata()
    {
        cout<<"Enter the id of the employee:";
        cin>>id;
    
    }
    void getdata()
    {
        cout<<"The id of the employee is:"<<'t'<<id<<endl;
        cout<<"No. of Employees:"<<cout<<endl;


    };
    int Employee::count;
    int main()
    {
        Employee Ram, Hari, Sita;
        Ram.setdata();
        Ram.getdata();
        Hari.setdata();
        Hari.getdata();
        Sita.setdata();
        Sita.getdata();
    }
}