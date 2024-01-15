#include <iostream>
using namespace std;

class Base
{
    public:
    int m_id;
    Base()
    {
        m_id = 0;
        std::cout << "Base\n";

    }
    int getId() const
    {
        return m_id;

    }
};
class Derived: public Base
{
    public:
    double m_cost;
Derived()
{
    std::cout << "Derived\n";

}
double getcost() const
{
    return m_cost; 
}
};

int main()
{
    std::cout << "Instantiating Base \n";
    Base cBase;
    std::cout << "Instantiating Derived \n";
    Derived cDerived;
    return 0;
}



