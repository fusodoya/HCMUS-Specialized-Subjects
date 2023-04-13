#include "xuat.h"

#include <iostream>
using namespace std;

void xuat(const bool& chieu, int& m, int& n, int arr[][N]) {
	cout << "Xoay" << (chieu ? " phai" : " trai") << " 90 do:\n";

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
	return;
}