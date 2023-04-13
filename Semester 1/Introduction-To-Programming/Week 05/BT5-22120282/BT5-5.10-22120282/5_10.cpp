#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    // rand() % b + a = random(a -> a + b - 1)

    int cnt = 0;
    while (true) {
        int type = rand() % 2; // 0 -> -, 1 -> +
        if (type) {
            // a = random(1 -> 98)
            int a = rand() % 98 + 1;
            // b = random(1 -> 99 - a)
            int b = rand() % (99 - a) + 1;
            cout << "Hoi " << ++cnt << ": " << a << " + " << b << " = ?\n";
            cout << "Dap: ";
            int ans; cin >> ans;
            if (!ans) break;
            while (a + b != ans) {
                cout << "Nhap lai ket qua: ";
                cin >> ans;
                if (!ans) break;
            }
        }else {
            // a = random(2 -> 99)
            int a = rand() % 98 + 2;
            // b = random(1 -> a - 1)
            int b = rand() % (a - 1) + 1;
            cout << "Hoi " << ++cnt << ": " << a << " - " << b << " = ?\n";
            cout << "Dap: ";
            int ans; cin >> ans;
            if (!ans) break;
            while (a - b != ans) {
                cout << "Nhap lai ket qua: ";
                cin >> ans;
                if (!ans) break;
            }
        }
    }
    return 0;
}
