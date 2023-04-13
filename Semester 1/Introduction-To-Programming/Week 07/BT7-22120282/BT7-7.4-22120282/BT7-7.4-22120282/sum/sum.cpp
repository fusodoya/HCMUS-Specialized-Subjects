#include "sum.h"

#include <iostream>
using namespace std;

void sum_row_collum(int& m, int& n, int arr[][N], int row[], int collum[]) {
	for (int i = 0; i < m; ++i) {
		row[i] = 0;
		for (int j = 0; j < n; ++j) row[i] += arr[i][j];
	}
	for (int j = 0; j < n; ++j) {
		collum[j] = 0;
		for (int i = 0; i < m; ++i) collum[j] += arr[i][j];
	}
	return;
}