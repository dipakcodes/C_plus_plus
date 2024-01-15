#include<iostream>
class num
{
    int a;
    int b;
    public:
    num(int x = 1, int y=2);
    void display();

};
num::num(int x, int y)
{
    a=x;
    b=y;
}

void num::display()
{
    std::cout<<a<<std::endl<<b<<std::endl;
}
int main()
{
    num n1=num();
    num n2=num(5,6);
    n1.display();
    n2.display();
    return 0;
}