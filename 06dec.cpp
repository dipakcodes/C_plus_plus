//Hierarchical inheritance
#include<iostream>
using namespace std;
//base class
class programmer
{
    protected:
    string name;
    int age;
    int grade;
    public:
    programmer(){}
    programmer(string name, int age, int grade):name(name),
    age(age), grade (grade){}
    void printdetails() const
    {
        cout <<"name:" << name << endl;
        cout <<"age:" << age << endl;
        cout <<"grade:" << grade << endl;

    }
};

//derived class 1
class phpprogrammer: public programmer
{
    private:
    double wage;
    public:
    phpprogrammer(){}
    phpprogrammer(string name, int age, int grade, double wage):
    programmer(name, age, grade), wage(wage){}
    void print() const
    {
        cout << "wage:" << wage << endl;
        cout << "************************************" << endl;
    }
};

//derived class 2
class javaprogrammer : public programmer
{
    private:
    double wage;
    public:
    javaprogrammer(){}
    javaprogrammer(string name, int age, int grade, double wage):
    programmer(name, age, grade), wage(wage){}
    void print() const
    {
        cout << "wage:" << wage << endl;
        cout << "***********************************" << endl;
    }
};

//derived class 3
class aiprogrammer : public programmer
{
    private:
    double wage;
    public:
    aiprogrammer(){}
    aiprogrammer(string name, int age, int grade, double wage):
    programmer(name, age, grade), wage(wage){}
    void print() const
    {
        cout << "wage:" << wage << endl;
        cout << "*********************************" << endl;
    }
};

int main()
{
    phpprogrammer p1("Suresh", 30, 4, 55000);
    p1.printdetails();
    p1.print();
    javaprogrammer p2("Ramesh", 28, 4, 65000);
    p2.printdetails();
    p2.print();
    aiprogrammer p3("Somesh", 25, 4, 85000);
    p3.printdetails();
    p3.print();
}
