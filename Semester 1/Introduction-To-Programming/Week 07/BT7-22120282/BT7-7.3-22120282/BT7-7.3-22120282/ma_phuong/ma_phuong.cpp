#include "ma_phuong.h"

#include <iostream>
using namespace std;

bool ma_phuong(int& n, int arr[][N], int &val) {
	for (int i = 0; i < n; ++i) {
		int ngang = 0, doc = 0;
		for (int j = 0; j < n; ++j) {
			ngang += arr[i][j];
			doc += arr[j][i];
		}
		if (ngang != val || doc != val) return 0;
	}
	return 1;
}