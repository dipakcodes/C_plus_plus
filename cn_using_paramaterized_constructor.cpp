#include <iostream>
class cn
{private:
    int a;
    int b;
    public:
    cn(int x, int y);
    void print()
    {
        if (b<0)
        {
            std::cout <<" The number is "<< a << " "<<b<<"i";
        }
        else{
            std::cout <<" The number is "<< a << " +"<<b<<"i";
        }
    }
};  

cn::cn(int x, int y){
a = x;
b = y;
}

int main(){
    cn a1(10, 20);
    cn a2(20,-30);
    a1.print();
    a2.print();
    return 0;
}

