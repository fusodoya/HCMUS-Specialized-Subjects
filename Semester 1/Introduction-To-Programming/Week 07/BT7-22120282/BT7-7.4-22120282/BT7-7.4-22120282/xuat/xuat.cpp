#include "xuat.h"

#include <iostream>
using namespace std;

void xuat(int& m, int& n, int arr[][N], int row[], int collum[]) {
	cout << "Dap an la:";
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][j] * 3 == row[i] + collum[j]) cout << ' ' << arr[i][j];
		}
	}
	cout << ".\n";
	return;
}