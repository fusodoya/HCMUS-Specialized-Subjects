#include "main.h"

#include <iostream>
using namespace std;

const int N = (int) 1e3 + 7;

int main() {
	int n, arr[N];

	nhap(n, arr);
	xuat(tang(n, arr), doi_xung(n, arr), csc(n, arr));
	return 0;
}