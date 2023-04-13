#include <iostream>
#include <iomanip>

int main() {
    double deg_c;
    std::cout << "Do C = ";
    std::cin >> deg_c;

    std::cout << std::fixed << std::setprecision(3);

    double deg_f = deg_c * 1.8 + 32;
    std::cout << "Do F = " << deg_f << '\n';

    double deg_k = deg_c + 273;
    std::cout << "Do K = " << deg_k << '\n';

    return 0;
}
