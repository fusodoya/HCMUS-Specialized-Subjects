#include <iostream>
#include <math.h>
using namespace std;

const int N = 1e6 + 7;
bool prime[N];

int main() {
    cout << "Nhap N = ";
    int n; cin >> n;
    for (int i = 2; i <= n; ++i) prime[i] = 1;

    int cnt = 0;
    const int c = sqrt(n);
    for (int i = 2; i <= c; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) prime[j] = 0;
        }
    }

    for (int i = 2; i <= n; ++i)
        if (prime[i]) cout << '#' << ++cnt << " = " << i << '\n';

    cout << "Co tat ca " << cnt << " so nguyen to.";
    return 0;
}
