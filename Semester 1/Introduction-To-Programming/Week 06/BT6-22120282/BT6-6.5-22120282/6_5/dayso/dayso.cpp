#include "dayso.h"
#include "../color/color.h"
#include "../goto/goto.h"
#include "../rand/rand.h"

#include <iostream>
using namespace std;

void so(int x, int y, int n) {
	int cnt = 0;

	if (n == 0) {
		GotoXY(x, y + (cnt++));
		cout << char(201) << char(205) << char(187);
		GotoXY(x, y + (cnt++));
		cout << char(186) << ' ' << char(186);
		GotoXY(x, y + (cnt++));
		cout << char(200) << char(205) << char(188);
	}
	else if (n == 1) {
		GotoXY(x, y + (cnt++));
		cout << ' ' << char(187);
		GotoXY(x, y + (cnt++));
		cout << ' ' << char(186);
		GotoXY(x, y + (cnt++));
		cout << ' ' << char(202);
	}
	else if (n == 2) {
		GotoXY(x, y + (cnt++));
		cout << char(205) << char(205) << char(187);
		GotoXY(x, y + (cnt++));
		cout << char(201) << char(205) << char(188);
		GotoXY(x, y + (cnt++));
		cout << char(200) << char(205) << char(205);
	}
	else if (n == 8) {
		GotoXY(x, y + (cnt++));
		cout << char(201) << char(205) << char(187);
		GotoXY(x, y + (cnt++));
		cout << char(204) << char(205) << char(185);
		GotoXY(x, y + (cnt++));
		cout << char(200) << char(205) << char(188);
	}
}

void day_so(int x, int y, char c[], int sz, bool change) {
	const int dis = 3;
	if (!change) TextColor(9);
	for (int i = 0; i < sz; ++i) {
		if (change) TextColor(random(9, 14));
		so(x + i * dis, y, c[i] - '0');
	}
	return;
}