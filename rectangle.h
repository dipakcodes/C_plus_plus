#pragma once
#include "Point.h"
class Rectangle{
    private:
    Point *point1;
    Point *point2;
    public:
    Rectangle();
    Rectangle(Point &p1, Point &p2);
    ~Rectangle();
    void displayallpoints();
};