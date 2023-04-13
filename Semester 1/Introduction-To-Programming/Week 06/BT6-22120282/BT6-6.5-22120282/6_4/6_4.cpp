#include "6_4.h"

#include <iostream>
using namespace std;
const int dien[] = { 0, 100, 150, 200, 300, 400 };
const int tien[] = { 1549, 1600, 1858, 2340, 2615, 2701 };

void main_6_4() {
	const int muc = 6;

	int sum = 0;
	cout << "Nhap chi so cu va chi so moi: ";
	int csc, csm; cin >> csc >> csm;
	int delta = csm - csc;
	for (int i = muc - 1; i >= 0; --i) {
		sum += thanh_tien(i, delta);
	}

	cout << "Tien dien la: " << sum << '\n';
	return;
}

int thanh_tien(int i, int& delta) {
	int sum = 0;
	if (delta > dien[i]) {
		sum = (delta - dien[i]) * tien[i];
		delta = dien[i];
	}
	return sum;
}