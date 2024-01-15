#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
    person(){}
    person (string name, int age): name(name), age(age){}
    void print() const
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};

class employee : public person
{
    protected:
    string dept;
    int grade;
    public:
    employee(){}
    employee(string name, int age, string dept, double grade): person(name, age), dept(dept), grade(grade){}
    void printa() const
    {
        person :: print();
        cout << "Department:" << dept << endl;
        cout << "grade:" << grade << endl;

    }
};

class programmer : public employee
{
    private:
    double wage;
    public:
    programmer(){}
    programmer(string name, int age, string dept, int grade, double wage):employee(name, age, dept, grade), wage(wage){}
    void print() const
    {
        employee::print();
        cout << "wage:" << wage << endl;

    }
};

int main()
{
    programmer p("Ram", 30, "AI", 4, 85000);
    p.print();
}