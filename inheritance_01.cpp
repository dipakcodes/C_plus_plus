#include <iostream>
using namespace std;

//Base class
class Person
{
private:
    long id;
public:
    std::string name;
    std::string getName() const 
    {
        return name;
    }
};
//derived class
class Student : public Person
{
    private:
    std:: string group;
    std:: string batch;
    public:
    void print() const
    {
        std::cout << name << "\n";
    }
};
int main()
{
    Student s;
    s.name = "Ram";  //name is public
    s.print();
    s.getName(); //getName is public
}
