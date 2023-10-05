#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double result = 0.0;
    double* ptrResult = &result;

    if (operation == '+') {
        *ptrResult = num1 + num2;
    }
    else if (operation == '-') {
        *ptrResult = num1 - num2;
    }
    else if (operation == '*') {
        *ptrResult = num1 * num2;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            *ptrResult = num1 / num2;
        }
        else {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
            return 1; // Возвращаем ненулевой код, чтобы указать на ошибку
        }
    }
    else {
        std::cout << "Ошибка: неверная операция!" << std::endl;
        return 1; // Возвращаем ненулевой код, чтобы указать на ошибку
    }

    std::cout << "Результат: " << *ptrResult << std::endl;

    return 0;
}
