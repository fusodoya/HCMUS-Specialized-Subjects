#include "6_3.h"

#include <iostream>
using namespace std;

void main_6_3() {
	cout << "Nhap a, b, c = ";
	float a, b, c; cin >> a >> b >> c;
	sapxep(a, b, c);

	if (a + b <= c) {
		cout << "Khong lap thanh tam giac!\n";
		return;
	}

	cout << "Lap thanh tam giac.\n";
	cout << "Loai tam giac la ";

	if (bang(a, c)) {
		cout << "deu.\n";
		return;
	}
	
	bool can = bang(a, b) || bang(b, c);
	bool vuong = bang(a * a + b * b, c * c);

	if (can && vuong) {
		cout << "vuong can.\n";
		return;
	}

	if (can) {
		cout << "can.\n";
		return;
	}

	if (vuong) {
		cout << "vuong.\n";
		return;
	}

	cout << "thuong.\n";
	return;
}

bool bang(const float& a, const float& b) {
	return abs(a - b) < 1e-6;
}

void doi(float& a, float &b) {
	float t = a;
	a = b;
	b = t;
	return;
}

void sapxep(float& a, float& b, float& c) {
	if (a > b) doi(a, b);
	if (a > c) doi(a, c);
	if (b > c) doi(b, c);
	return;
}