#include<iostream>
class area
{
    int l;
    int b;
    int area1;
    public:
    area(int x, int y);
    void display();

};
area::area(int x, int y)
{
    l=x;
    b=y;
    area1=l*b;

}
void area::display()
{
    std::cout<<l<<std::endl<<b<<std::endl;
    std::cout<<area1<<std::endl;
}
main()
{
    area n1(5,6);
    n1.display();
    return 0;
}