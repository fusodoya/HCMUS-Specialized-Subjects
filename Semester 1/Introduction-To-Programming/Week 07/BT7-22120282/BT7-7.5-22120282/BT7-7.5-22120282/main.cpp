#include "main.h"

#include <iostream>
using namespace std;

int main() {
	int m, n, arr[N][N];

	nhap(m, n, arr);
	xoay_trai(m, n, arr);
	xuat(0, m, n, arr);

	xoay_trai(m, n, arr);
	xoay_trai(m, n, arr);
	xuat(1, m, n, arr);
	return 0;
}