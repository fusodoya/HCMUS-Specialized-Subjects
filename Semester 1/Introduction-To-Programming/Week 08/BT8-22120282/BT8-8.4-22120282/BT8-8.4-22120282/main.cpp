#include "nhap.h"
#include "trim_mid.h"
#include "trim_left.h"
#include "trim_right.h"
#include <iostream>
using namespace std;

int main() {
	const int N = (int)1e4;
	char S[N];
	nhap(S);
	trim_mid(S);
	trim_left(S);
	trim_right(S);
	cout << S;
	return 0;
}