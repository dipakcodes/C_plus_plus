#include<iostream>
void add (const int &a, const int &b, int &result)
{
    result = a+b;
}

int main()
{
    int x=4, y=5;
    int z;
    add(x,y,z); 
    std::cout<<z;
}