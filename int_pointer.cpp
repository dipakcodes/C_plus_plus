#include<iostream>
int main()
{
    int *myint;
    short *myshort;
    long *mylong;
    std::cout<<myint<<std::endl;
    std::cout<<myshort<<std::endl;
    std::cout<<mylong<<std::endl;

    ++myint;
    ++myshort;
    ++mylong;

    std::cout<<myint<<std::endl;
    std::cout<<myshort<<std::endl;
    std::cout<<mylong<<std::endl;

}