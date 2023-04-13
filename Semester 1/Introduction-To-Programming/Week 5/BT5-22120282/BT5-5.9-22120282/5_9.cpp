#include <iostream>
using namespace std;

int main() {
    int day, month, year, thu;
    cout << "Muon xem lich thang va nam nao? ";
    cin >> month >> year;

    cout << "Ngay dau thang la thu may? ";
    cin >> thu;

    switch (month) {
        case 2:
            if (year % 4 == 0) {
                day = 29;
                if (year % 100 == 0 && year % 400 != 0) day = 28;
            } else day = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;
        default:
            day = 30;
    }

    cout << "Mon Tue Wed Thu Fri Sat Sun \n";
    for (int i = 2; i < thu; ++i) cout << "    ";
    for (int i = 1; i <= day; ++i) {
        if (i < 10) cout << "  " << i << " ";
        else cout << " " << i << " ";
        if (++thu > 8) {
            thu = 2;
            cout << '\n';
        }
    }
    return 0;
}
