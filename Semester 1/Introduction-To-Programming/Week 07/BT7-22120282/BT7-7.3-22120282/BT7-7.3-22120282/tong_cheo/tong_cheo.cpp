#include "tong_cheo.h"

#include <iostream>
using namespace std;

void tong_cheo(int& chinh, int& phu, int &n, int arr[][N]) {
	chinh = phu = 0;
	for (int i = 0; i < n; ++i) {
		chinh += arr[i][i];
		phu += arr[i][n - i - 1];
	}
	return;
}