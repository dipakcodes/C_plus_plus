#include<iostream>
int main()
{
    int z = 10;
    if (z<10 && ++z>10)
    {
        std::cout<<"z = "<< z <<std::endl;
    }

    //int z = 10;
    if (++z>10 && z < 10)
    {
        std::cout << "z = "<< z << std::endl;
    }
}
