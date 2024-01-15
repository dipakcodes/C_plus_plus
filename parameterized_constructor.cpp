#include <iostream>
class num
{
    int a;
    int b;
    public:
    num(int x, int y);
    void display();

};
num::num(int x, int y)
{
    a = x;
    b = y;
}
void num::display()
{
    std::cout<<a<<std::endl<<b<<std::endl;
}
int main()
{
    num n1 (10, 20);
    n1.display();
    num n2 (30, 40);
    n2.display();
    return 0;
}