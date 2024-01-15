#include<iostream>
void display(int a)
{
    std::cout<<"a = "<<a<<std::endl;
}
void display (int a, int b)
{
    std::cout <<"a = "<<a<<" and b = "<<b<<std::endl;
}
int main()
{
    display(5);
    display(5, 10);
    return 0;
}