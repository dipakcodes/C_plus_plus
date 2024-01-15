#include <iostream>
int square(int num)
{
    int *ptr = new int (num);
    int r = (*ptr)*(*ptr);
    return r;
}
int main()
{
    int s = square(50);
    std::cout<<s;
}