#include "count_snt.h"
#include "check_snt.h"

#include <iostream>
using namespace std;

int count_snt(int& n, int arr[]) {
	int cnt = 0;
	for (int i = 0; i < n; ++i) cnt += check_snt(arr[i]);
	return cnt;
}