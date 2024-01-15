#include<iostream>
using namespace std;
class room
{
    public:
    double length;
    double breadth;
    double height;

    void insertdata(double a, double b, float c);
    void displaydata()
    {
        cout<<"length: "<<length<<"\n";
        cout<<"breadth: "<<breadth<<"\n";
        cout<<"height: "<<height<<"\n\n\n";
    }
};
void room::insertdata(float a, float b, float c)
{
    length = a;
    breadth = b;
    height = c;
}
int main()
{
    float length;
    float breadth;
    float height;
    room x;
    cout<<"Enter length:\n";
    cin>>length;
    cout<<"Enter breadth:\n";
    cin>>breadth;
    cout<<"height:\n";
    cin>>height;
    cout<<"student Info:\n";
    x.insertdata(student_name, student_roll, student_marks);
    x.displaydata();
    return 0;
}