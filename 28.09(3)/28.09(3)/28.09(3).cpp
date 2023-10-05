#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    std::cout << "a после обмена: " << a << std::endl;
    std::cout << "b после обмена: " << b << std::endl;

    return 0;
}
