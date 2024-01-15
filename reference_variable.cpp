#include<iostream>
int main()
{
    int a=5;
    int &b=a;
    a++;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<"*"<<std::endl;
    int c = 10;
    b=c;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<"*"<<std::endl;
    std::cout<<&a<<std::endl;
    std::cout<<&b<<std::endl;
    std::cout<<&c<<std::endl;
    c++;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<"*****"<<std::endl;
    b++;

}