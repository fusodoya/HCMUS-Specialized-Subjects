#include "6_2.h"

#include <iostream>
using namespace std;

void main_6_2() {
	cout << "Phan so 1 (a / b) = ";
	int a, b; cin >> a >> b;
	cout << "Phan so 2 (c / d) = ";
	int c, d; cin >> c >> d;
	cout << "Phep tinh (+, -, *, /) = ";
	char type; cin >> type;

	int tu, mau;
	if (type == '+') {
		tu = a * d + c * b;
		mau = b * d;
	}
	else if (type == '-') {
		tu = a * d - c * b;
		mau = b * d;
	}
	else if (type == '*') {
		tu = a * c;
		mau = b * d;
	}
	else {
		tu = a * d;
		mau = b * c;
	}
	
	int div = gcd(tu, mau);
	cout << "Ket qua = " << tu/div;
	if (div < mau) cout << '/' << mau / div;
	cout << '\n';
	return;
}

int gcd(int x, int y) {
	while (y != 0) {
		int res = x % y;
		x = y;
		y = res;
	}
	return x;
}