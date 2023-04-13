#include <iostream>

int main() {
    int cnt = 0;
    for (int i = 100; i < 1000; ++i) {
        int t = i;

        int d = t % 10;
        t /= 10;

        int c = t % 10;
        t /= 10;

        if (c == t + d)
            std::cout << ++cnt << ": " << i << '\n';
    }

    std::cout << "Co tat ca " << cnt << " so thoa tinh chat.";

    return 0;
}
