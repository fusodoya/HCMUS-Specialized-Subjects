#include "main.h"

#include <iostream>
using namespace std;

const int N = (int)1e3 + 7;

int main() {
	int n, arr[N];
	nhap(n, arr);
	xuat(count_so_am(n, arr), count_snt(n, arr));
	return 0;
}