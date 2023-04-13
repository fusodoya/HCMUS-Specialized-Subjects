#include <iostream>
using namespace std;

int strcmp(char S[], char T[]) {
	for (int i = 0;; ++i) {
		if (T[i] == '\0' && S[i] == '\0') return 0;
		if (T[i] == '\0') return 1;
		if (S[i] == '\0') return -1;
		if (S[i] > T[i]) return 1;
		if (S[i] < T[i]) return -1;
	}
	return 0;
}

void strcat(char S[], char T[]) {
	const int N = (int)1e4;
	char R[N];
	for (int i = 0; ; ++i) {
		R[i] = S[i];
		if (S[i] == '\0') {
			for (int j = 0; T[j] != '\0'; ++j) {
				R[i++] = T[j];
			}
			R[i] = '\0';
			break;
		}
	}
	for (int i = 0; ; ++i) {
		S[i] = R[i];
		if (R[i] == '\0') break;
	}
	return;
}

double atof(char S[]) {
	long double n = 0, div = 1;
	bool change = 0;
	for (int i = 0; S[i] != '\0'; ++i) {
		if (S[i] == '.') {
			change = 1;
			continue;
		}
		if (change) div *= 10;
		n *= 10;
		n += S[i] - '0';
	}
	n /= div;
	return n;
}

const int N = (int)1e4;
char S[N], T[N];

int main() {
	// insert code :b
}