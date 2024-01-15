#include <iostream>
#include "Rectangle.h"
using namespace std;
Rectangle :: Rectangle(){
    point1 == nullptr;
    point2 = nullptr;
}
Rectangle :: Rectangle(Point &p1, Point &p2){
    point1 = new Point(p1);
    point2 = new Point(p2);
}
Rectangle :: ~Rectangle(){
    cout << "Deleting Points" << endl;
    delete point1;
    delete point2;
}
void Rectangle :: displayallpoints(){
    cout << point1 -> x << "," << point2 -> y << endl;
    cout << point2 -> x << "," << point1 -> y << endl;
    cout << point2 -> x << "," << point2 -> y << endl;
    cout << point1 -> x << "," << point2 -> y << endl;
}