#include "trim_mid.h"
#include <iostream>
#include <ctype.h>
using namespace std;

void trim_mid(char S[]) {
	const int N = (int)1e4;
	char T[N];
	for (int i = 0; ; ++i) {
		T[i] = S[i];
		if (S[i] == '\0') break;
	}
	int cnt = 0;
	for (int i = 0; T[i] != '\0'; ++i) {
		if (isspace(T[i])) continue;
		S[cnt++] = ' ';
		for (; T[i] != '\0' && !isspace(T[i]); ++i) S[cnt++] = T[i];
		--i;
	}
	S[cnt] = '\0';
	return;
}