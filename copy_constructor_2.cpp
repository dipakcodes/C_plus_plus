#include<iostream>
class num
{
    int a;
    int b;
    public:
    num (int x, int y);
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
main()
{
    num n1(10,20);
    n1.display();
    num n2(n1);
    n2.display();
    num n3 = n1;
    n3.display();
}