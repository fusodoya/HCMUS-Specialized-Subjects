#include "main.h"

#include <iostream>
using namespace std;

int main() {
	int m, n, arr[N][N], row[N], collum[N];

	nhap(m, n, arr);
	sum_row_collum(m, n, arr, row, collum);
	xuat(m, n, arr, row, collum);
	return 0;
}