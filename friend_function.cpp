#include<iostream>
#include<cmath>
using namespace std;
class point 
{
    int x, y;
    friend void distance (point p, point q);
    public:
    point (int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }
};
void distance(point p, point q)
{
    float dist;
    dist = sqrt(pow(p.x-q.x, 2) + pow(p.y-q.y, 2));
    cout<<dist<<endl;

}
int main()
{
    point p(1,1);
    p.display();
    point q(2,2);
    q.display();
    distance(p,q);
}