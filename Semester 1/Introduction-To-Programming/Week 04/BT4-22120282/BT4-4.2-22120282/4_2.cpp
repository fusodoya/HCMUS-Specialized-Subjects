#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
    int a, b, c;
    std::cout << "nhap he so a, b, c = ";
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(3);

    int delta = b * b - 4 * a * c;
    if (delta < 0) {
        std::cout << "Phuong trinh vo nghiem!";
    } else if (delta == 0) {
        float ans = -1.0 * b / (2.0 * a);
        std::cout << "Nghiem kep = " << ans;
    } else {
        float x_1 = (-1.0 * b - sqrt(delta)) / (2.0 * a);
        std::cout << "Nghiem 1 = " << x_1 << '\n';
        float x_2 = (-1.0 * b + sqrt(delta)) / (2.0 * a);
        std::cout << "Nghiem 2 = " << x_2;
    }

    return 0;
}
