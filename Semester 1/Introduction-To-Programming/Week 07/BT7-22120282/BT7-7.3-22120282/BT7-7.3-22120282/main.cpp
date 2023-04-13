#include "main.h"

#include <iostream>
using namespace std;

int main() {
	int n, arr[N][N];

	nhap(n, arr);

	int chinh, phu;
	tong_cheo(chinh, phu, n, arr);

	xuat(chinh, phu, ma_phuong(n, arr, chinh) && chinh == phu);
	return 0;
}