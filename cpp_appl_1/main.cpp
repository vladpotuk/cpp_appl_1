#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int num1, num2;
    int* ptr1, * ptr2;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        std::cout << "Найбільше число: " << *ptr1 << std::endl;
    }
    else if (*ptr1 < *ptr2) {
        std::cout << "Найбільше число: " << *ptr2 << std::endl;
    }
    else {
        std::cout << "Числа рівні" << std::endl;
    }

    return 0;
}
