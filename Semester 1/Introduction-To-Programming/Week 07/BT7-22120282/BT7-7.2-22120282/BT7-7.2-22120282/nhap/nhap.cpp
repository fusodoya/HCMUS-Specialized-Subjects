#include "nhap.h"

#include <iostream>
using namespace std;

void nhap(int& n, int arr[]) {
	cout << "Nhap N = "; cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << "Phan tu " << i << " = "; cin >> arr[i];
	}
	return;
}