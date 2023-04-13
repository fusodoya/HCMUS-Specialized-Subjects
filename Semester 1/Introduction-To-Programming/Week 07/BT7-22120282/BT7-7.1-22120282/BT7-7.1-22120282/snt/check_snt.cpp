#include "check_snt.h"

#include <iostream>

bool check_snt(int val) {
	if (val < 2) return 0;
	for (int i = 2; i * i <= val; ++i)
		if (val % i == 0) return 0;
	return 1;
}