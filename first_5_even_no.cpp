#include <iostream>

int main() {
    int count = 0;
    int num = 2; 

    std::cout << "The first 5 even numbers are:" << std::endl;

    while (count < 5) {
        std::cout << num << " ";
        num += 2;
        count++;
    }

    std::cout << std::endl;

    return 0;
}
