#include<iostream>
class myclass
{
    int num;
    public:
    myclass()
    {
        num=0;
    }
    myclass (int n)
    {
        num=n;
    }
    ~myclass()
    {
        std::cout<<"\n object destroyed!";
    }
    void getdata()
    {
        std::cout<<std::endl<<"enter an integer:";
    }
    void dispdata()
    {
        std::cout<<std::endl<<"Num:"<<num;
    }
};
int main()
{
    myclass a1;
    myclass b1(5);
    a1.getdata();
    b1.getdata();
    b1.dispdata();
};