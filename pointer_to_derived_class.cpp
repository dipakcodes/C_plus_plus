#include<iostream>
using namespace std;
class polygon
{
    protected:
    int width, height;
    public:
    void set_values (int a, int b)
    {
        width = a;
        height = b;

    }
};

class rectangle: public polygon
{
    public:
    int area()
    {
        return width*height;
    }
};

class triangle : public polygon
{
    public:
    int area()
    {
        return width*height/2;
    }
};

int main()
{
    rectangle rect;
    triangle trgl;
    polygon * poly1 = &rect;
    polygon * poly2 = &trgl;
    poly1->set_values (4,5);
    poly2->set_values (4,5);
    cout << rect.area()<<'\n';
    cout << trgl.area()<<'\n';
    return 0;
}