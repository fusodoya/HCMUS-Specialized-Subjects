#include "doi_xung.h"

#include <iostream>
using namespace std;

bool doi_xung(int& n, int arr[]) {
	for (int i = 0; i + i < n; ++i)
		if (arr[i] != arr[n - i - 1]) return 0;
	return 1;
}