#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
    person(){}
    person(string name, int age): name(name), age(age)
    {
        cout<<"I am a person." << endl;
    }
    void print_person() const
    {
        
    }
}