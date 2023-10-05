#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    int* ptr = &number;

    if (*ptr > 0) {
        std::cout << "Число положительное." << std::endl;
    }
    else if (*ptr < 0) {
        std::cout << "Число отрицательное." << std::endl;
    }
    else {
        std::cout << "Число равно нулю." << std::endl;
    }

    return 0;
}
