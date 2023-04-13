#include <iostream>

int main() {
    std::string name;
    std::cout << "Ten = ";
    int cnt = 0;
    getline(std::cin, name);

    int year;
    std::cout << "Nam sinh = ";
    std::cin >> year;

    std::cout << "Chao ban " << name << ", nam nay ban " << 2022 - year << " tuoi.";
    return 0;
}
