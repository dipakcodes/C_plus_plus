#include<iostream>
int main()
{
    int var = 789;
    int *ptr2;
    int **ptr1;
    ptr2 = &var;
    ptr1 = &ptr2;

    std::cout<<"value of var = "<<var<<std::endl;
    std::cout<<"value of var using single pointer = "<<*ptr2<<std::endl;
    std::cout<<"value of var using double pointer = "<<**ptr1<<std::endl;

    std::cout<<"Address of var = "<<&var<<std::endl;
    std::cout<<"Address of single pointer = "<<ptr2<<std::endl;
    std::cout<<"Address of double pointer = "<<ptr1<<std::endl;


}

