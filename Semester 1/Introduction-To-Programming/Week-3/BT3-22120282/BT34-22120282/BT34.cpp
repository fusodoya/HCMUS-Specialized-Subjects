#include <iostream>

int main() {
    int h, m, s, t_1, t_2;

    std::cout << "Thoi diem T1 (h, m, s) = ";
    std::cin >> h >> m >> s;
    t_1 = h * 3600 + m * 60 + s;

    std::cout << "Thoi diem T2 (h, m, s) = ";
    std::cin >> h >> m >> s;
    t_2 = h * 3600 + m * 60 + s;

    std::cout << "Khoang cach = " << t_2 - t_1;

    return 0;
}
