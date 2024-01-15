#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Point p1(10, 20);
    Point p2(3, 25);
    Rectangle rect(p1, p2);
    rect.displayallpoints();
}