#include "trim_right.h"
#include <iostream>
#include <ctype.h>
using namespace std;

void trim_right(char S[]) {
	for (int i = 0; ; ++i) {
		if (S[i] == '\0') {
			while (isspace(S[--i])) S[i] = '\0';
			break;
		}
	}
	
	return;
}