#include <iostream>

int main() {
    int money;
    int unit[] = {20000, 10000, 5000, 1000};
    int cnt[4];

    std::cout << "So tien can doi = ";
    std::cin >> money;

    for (int i = 0; i < 4; ++i) {
        cnt[i] = money / unit[i];
        money -= cnt[i] * unit[i];
    }

    for (int i = 0; i < 4; ++i) {
        std::cout << "So to " << unit[i] << ": " << cnt[i] << '\n';
    }

    return 0;
}
