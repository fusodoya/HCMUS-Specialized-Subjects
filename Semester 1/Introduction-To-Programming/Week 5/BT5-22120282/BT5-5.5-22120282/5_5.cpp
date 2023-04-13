#include <iostream>
using namespace std;

int main() {
    int a, b, gcd, lcm;
    cout << "Nhap 2 so nguyen duong a, b = ";
    cin >> a >> b;

    int x = a, y = b;
    while (x != 0) {
        int t = y % x;
        y = x;
        x = t;
    }
    gcd = y;
    lcm = a * b / gcd;

    cout << "UCLN = " << gcd << '\n';
    cout << "BCNN = " << lcm;

    return 0;
}
