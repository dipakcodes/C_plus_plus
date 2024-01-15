#include<iostream>
//square
void area (int l)
{
    int a;
    a = l*l;
    std::cout<<"area="<<a<<std::endl;
}
//rectangle
int area(int l, int b)
{
    int a = l*b;
    std::cout<<"area = "<<a<<std::endl;
}
//triangle
float area (double b, double h)
{
    float a;
    a = 0.5*b*h;
    std::cout<<"area = "<<a<<std::endl;

}
int main()
{
    area (5);
    area (5,4);
    area (8.0,3.0);
    return 0;
}
