#include<iostream>
int main()
{
    int arr[3];
    int *ptr = arr;
    arr[0]=1;
    std::cout<<arr[0]<<std::endl;
    *(ptr+1)=2;
    std::cout<<arr[1]<<std::endl;
    *(ptr+2)=3;
}