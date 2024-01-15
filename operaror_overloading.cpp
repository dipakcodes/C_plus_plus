#include<iostream>
using namespace std;
class Count
{
    private:
    int value;
    public:
    Count()
    {
        value = 5;
    }
    void operator -- (int)
    {
        value--;
    }
    void display()
    {
        cout << "count: " << value << endl;
    }
};
int main()
{
    Count count1;
    count1--;
    count1.display();
    return 0;
}