#include<iostream>
#include<cmath>
class point
{
    private:
    double x;
    double y;
    public:
    void setdata (double x, double y);
    double calculatedistance(point p2);

};
void point::setdata(double x, double y)
{
    this -> x = x;
    this -> y = y;
}
double point::calculatedistance(point p2)
{
    {
        return sqrt(pow((x-p2.x),2) + pow((y-p2.y), 2));
    }
}
int main()
{
    point p1;
    point p2;
    p1.setdata(1,2);
    p2.setdata(3,4);
    std::cout<<"The distance between the points is6"<<'\t'<<p1.calculatedistance(p2)<<std::endl;
}