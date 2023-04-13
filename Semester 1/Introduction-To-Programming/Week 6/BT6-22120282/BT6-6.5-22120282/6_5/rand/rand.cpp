#include "rand.h"

#include <iostream>

int random(int l, int r) {
	return rand() % (r - l + 1) + l;
}