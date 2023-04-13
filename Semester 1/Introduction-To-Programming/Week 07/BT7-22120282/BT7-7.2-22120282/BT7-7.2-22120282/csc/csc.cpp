#include "csc.h"

#include <iostream>
using namespace std;

bool csc(int& n, int arr[]) {
	int cong_sai = arr[n - 1] - arr[0];
	if (cong_sai % (n - 1) != 0) return 0;
	cong_sai /= n - 1;
	for (int i = 1; i < n; ++i) 
		if (arr[i] != arr[i - 1] + cong_sai) return 0;
	return 1;
}