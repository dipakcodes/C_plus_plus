#include<iostream>
using namespace std;
class Room
{
    public:
    int length;
    int breadth;
    int height;
    void getdata()
    {
        cout << "Enter the length.\n";
        cin >> length;
        cout << "Enter the breadth.\n";
        cin >> breadth;
        cout << "Enter the height.\n";
        cin >> height;
    }
};

class LivingRoom: public Room
{
    public:
    int area;
    int volume;
    void calculatearea()
    {
        area = length*breadth;

    }
    void calculatevolume()
    {
        volume = length * breadth * height;
    }
    void displayresult()
    {
        cout<<"The area of the living room is " << area << "." << endl;
        cout<<"The volume of the living room is " << volume << "." << endl;
    }
};

int main()
{
    LivingRoom L1;
    L1.getdata();
    L1.calculatearea();
    L1.calculatevolume();
    L1.displayresult();
}
