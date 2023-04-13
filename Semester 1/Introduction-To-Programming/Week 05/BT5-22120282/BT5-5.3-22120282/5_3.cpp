#include <iostream>
using namespace std;

int main() {
    int cnt = 0, maximum = 0;
    while (true) {
        int val;
        cout << "So thu " << ++cnt << " = ";
        cin >> val;
        if (val == 0) break;
        while (val < 0) {
            cout << "Nhap lai so thu " << cnt << " = ";
            cin >> val;
        }
        if (val > maximum) {
            maximum = val;
        }
    }

    cout << '\n';
    cout << "So lon nhat = " << maximum << '\n';
    cout << "So nho nhat = 0";

    return 0;
}
