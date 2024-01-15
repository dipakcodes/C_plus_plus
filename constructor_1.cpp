#include<iostream>
class point
{
    private:
    double x, y;
    public:
    point();
    void print()
    {
        std::cout <<"x = " << x << ", y = " << y << std::endl;
    }
};
point::point()
{
    x = 1;
    y = 2;

}
int main()
{
    point p1;
    p1.print();
    point p2;
    p2.print();

}