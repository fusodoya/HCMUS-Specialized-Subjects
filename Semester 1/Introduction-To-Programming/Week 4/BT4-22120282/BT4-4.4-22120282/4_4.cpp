#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Nhap N = ";
    std::cin >> n;

    std::cout << std::fixed << std::setprecision(3);

    long long a = 1;
    for (int i = 1; i <= n; ++i) a *= i;
    std::cout << n << "! = " << a << '\n';

    float b = 0;
    for (int i=1 ; i <= n; ++i)
        if (i % 2 == 0) b -= 1.0 / i;
        else b += 1.0 / i;
    std::cout << "!\ln(2) = " << b << '\n';

    float c = 0;
    for (int i=1 ; i <= n; ++i)
        if (i % 2 == 0) c -= 1.0 / (2 * i - 1);
        else c += 1.0 / (2 * i);
    c *= 4.0;
    std::cout << "Pi = " << c << '\n';

    long long d = 0;
    for (int i = 1; i * i <= n; ++i) d += i * i;
    std::cout << "S = " << d << '\n';

    return 0;
}
