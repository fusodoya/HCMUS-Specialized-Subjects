#include <iostream>
#include <math.h>

int main() {
    double p, q, x, tmp;
    std::cout << "Nhap p, q = ";
    std::cin >> p >> q;

    tmp = sqrt(pow(p, 6.0) / 27 + pow(q, 2.0) / 4);
    x = pow(tmp - q / 2, 1.0 / 3) - pow(tmp + q / 2, 1.0 / 3);

    std::cout << "Nghiem x = " << x;

    return 0;
}
