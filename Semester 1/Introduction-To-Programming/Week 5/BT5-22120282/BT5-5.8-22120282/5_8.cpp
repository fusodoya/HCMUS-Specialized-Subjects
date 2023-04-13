#include <iostream>
using namespace std;

int main() {
    cout << "Nhap N = ";
    int n; cin >> n;

    int xuoi = n, nguoc = 0;
    while (n) {
        (nguoc *= 10) += n % 10;
        n /= 10;
    }

    bool giam = 1;
    n = xuoi;
    while (n > 9) {
        giam &= (n % 10) > ((n / 10) % 10);
        n /= 10;
    }

    cout << "Cac chu so " << (giam ? "giam " : "khong giam ") << "tu hang don vi.\n";
    cout << "Cac chu so " << ((xuoi == nguoc) ? "doi xung." : "khong doi xung.");

    return 0;
}
