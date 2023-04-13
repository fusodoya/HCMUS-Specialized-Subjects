#include "xuli.h"
#include <iostream>
using namespace std;

void xuli(char S[]) {
	int cnt['z'] = {};
	int i;
	for (i = 0; S[i] != '\0'; ++i) cnt[S[i]]++;

	for (--i; i > 0; --i) {
		int newline = 0;
		for (char c = 'a'; c <= 'z'; ++c) if (cnt[c] == i) {
			cout << i << ':';
			newline = 1;
			break;
		}
		for (char c = 'a'; c <= 'z'; ++c) if (cnt[c] == i) {
			cout << ' ' << c;
		}
		if (newline) cout << '\n';
	}
	return;
}