#include "count_so_am.h"

#include <iostream>
using namespace std;

int count_so_am(int& n, int arr[]) {
	int cnt = 0;
	for (int i = 0; i < n; ++i) cnt += (arr[i] < 0);
	return cnt;
}