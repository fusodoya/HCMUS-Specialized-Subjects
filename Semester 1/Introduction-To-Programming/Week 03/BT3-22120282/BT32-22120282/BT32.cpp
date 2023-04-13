#include <iostream>

int main() {
    int num;
    std::cout << "So xe = ";
    std::cin >> num;

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    sum %= 10;

    std::cout << "So nut = " << sum;

    return 0;
}
