#include "nhap.h"

#include <iostream>
using namespace std;

void nhap(int& n, int arr[][N]) {
	cout << "Nhap N = "; cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << "Hang thu " << i << " = ";
		for (int j = 0; j < n; ++j) cin >> arr[i][j];
	}
	return;
}