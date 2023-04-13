#include "xuli.h"
#include <iostream>
using namespace std;

int len(char S[]) {
	int i;
	for (i = 0; S[i] != '\0'; ++i);
	return i;
}

void xuli(char S[], char T[]) {
	cout << "Kiem duyet = ";
	int n = len(S), m = len(T);
	for (int i = 0; i < n; ++i) {
		int change = 1;
		if (i + m - 1 >= n) change = 0;
		else {
			for (int j = 0; j < m; ++j) {
				if (S[i + j] != T[j]) {
					change = 0;
					break;
				}
			}
		}
		if (change) {
			cout << "###";
			i += m - 1;
		}
		else cout << S[i];
	}
	return;
}