#include<iostream>
using namespace std;
template <class T>
T add(T x)
{
    T result;
    result = x + x;
    return result;

}
int main()
{
    int i, ii;
    float x, xx;
    double y, yy;
    string str = "a", resultstr;
    i = 2;
    x = 2.5;
    y = 2.245;

    ii = add <int> (i);
    cout << i << ":" << ii << endl;
    xx = add <float> (x);
    cout << x << ": " << xx << endl;
    yy = add <double> (y);
    cout << y << ": " << yy << endl;
    

    resultstr = add < string > (str);
    cout << str << ": " << resultstr << endl;

}