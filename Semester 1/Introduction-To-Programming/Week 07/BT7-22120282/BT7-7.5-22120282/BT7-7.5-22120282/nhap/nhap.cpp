#include "nhap.h"

#include <iostream>
using namespace std;

void nhap(int &m, int& n, int arr[][N]) {
	cout << "Nhap M, N = "; cin >> m >> n;
	for (int i = 0; i < m; ++i) {
		cout << "Hang thu " << i << " = ";
		for (int j = 0; j < n; ++j) cin >> arr[i][j];
	}
	return;
}