#include "xuli.h"
#include <iostream>
using namespace std;

void xuli(char S[], char c) {
	const int N = (int)1e4;
	for (int i = 0; S[i] != '\0'; ++i) {
		if (S[i] == c) continue;
		cout << '\"';
		for (; S[i] != '\0' && S[i] != c; ++i) cout << S[i];
		cout << '\"';
		--i;
		cout << '\n';
	}
	return;
}