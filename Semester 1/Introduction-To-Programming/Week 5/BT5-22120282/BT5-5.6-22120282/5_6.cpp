#include <iostream>
using namespace std;

int main() {
    cout << "Nhap N, M = ";
    int n, m; cin >> n >> m;
    cout << m << " bit dau tien cua " << n << ": ";

    int bit[32];
    int cnt = 0;
    for (int i = 0; i < 32; ++i) {
        bit[i] = n & 1;
        n >>= 1;
    }

    for (int i = m - 1; i >= 0; --i) cout << bit[i];

    return 0;
}
