#include<iostream>
using namespace std;
class ComputeSum
{
    public:
    int sum(int x, int y)
    {
        return x+y;

    }
    float sum (float x, float y, float z)
    {
        return x+y+z;
    }
};
int main()
{
    ComputeSum s;
    cout << "sum is " << s.sum(10, 20) << '\n';
    cout << "sum is " << s.sum(1.2,2.5,3.7) << '\n';

}