#include "6_1.h"

#include <iostream>
using namespace std;

void main_6_1() {
	cout << "Nhap N = ";
	int n; cin >> n;
	int cnt = 0;
	for (int i = 2; i <= n; ++i) {
		if (check_prime(i)) {
			++cnt;
			cout << '#' << cnt << " = " << i << '\n';
		}
	}
	cout << "Co ta ca " << cnt << " so nguyen to.\n";
	return;
}

bool check_prime(const int& n) {
	if (n < 2) return 0;
	const int c = (int) sqrt(n);
	for (int i = 2; i <= c; ++i) if (n % i == 0) return 0;
	return 1;
}