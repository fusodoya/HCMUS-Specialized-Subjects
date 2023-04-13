#include <iostream>

int main() {
    int month, year, day;
    std::cout << "Nhap thang va nam = ";
    std::cin >> month >> year;

    switch (month) {
        case 2:
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) day = 29;
                    else day = 28;
                } else day = 29;
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

    std::cout << "Thang " << month << " nam " << year << " co " << day << " ngay.";

    return 0;
}
