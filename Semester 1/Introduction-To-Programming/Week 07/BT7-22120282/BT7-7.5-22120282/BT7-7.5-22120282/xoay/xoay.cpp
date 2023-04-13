#include "xoay.h"

#include <iostream>
using namespace std;

void xoay_trai(int& m, int& n, int arr[][N]) {
	int res[N][N];

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			res[n - j - 1][i] = arr[i][j];
		}
	}

	int t = m;
	m = n;
	n = t;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) arr[i][j] = res[i][j];
	}
	return;
}