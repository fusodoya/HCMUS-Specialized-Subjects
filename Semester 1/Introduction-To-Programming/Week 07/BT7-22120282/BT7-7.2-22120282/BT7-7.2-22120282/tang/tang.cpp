#include "tang.h"

#include <iostream>

bool tang(int& n, int arr[]) {
	for (int i = 1; i < n; ++i)
		if (arr[i] <= arr[i - 1]) return 0;
	return 1;
}