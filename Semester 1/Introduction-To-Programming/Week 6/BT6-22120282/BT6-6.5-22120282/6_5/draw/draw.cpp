#include "draw.h"
#include "../goto/goto.h"
#include "../dayso/dayso.h"

#include <iostream>
#include <Windows.h>
using namespace std;

void hcn(int x, int y, int w, int u, int d) {
	int cnt = 0;

	GotoXY(x, y + (cnt++));
	cout << char(201);
	for (int j = 0; j < w; ++j) cout << char(205);
	cout << char(187);

	for (int i = 0; i < u; ++i) {
		GotoXY(x, y + (cnt++));
		cout << char(186);
		for (int j = 0; j < w; ++j) cout << ' ';
		cout << char(186);
	}

	GotoXY(x, y + (cnt++));
	cout << char(204);
	for (int j = 0; j < w; ++j) cout << char(205);
	cout << char(185);

	for (int i = 0; i < d; ++i) {
		GotoXY(x, y + (cnt++));
		cout << char(186);
		for (int j = 0; j < w; ++j) cout << ' ';
		cout << char(186);
	}

	GotoXY(x, y + (cnt++));
	cout << char(200);
	for (int j = 0; j < w; ++j) cout << char(205);
	cout << char(188);

	return;
}

void ve_menu() {
	const int wt = 300;
	const int l = 30;
	const int w = 50, u = 11, d = 3;

	string mssv = "22120282";
	char c[8];
	for (int i = 0; i < 8; ++i) c[i] = mssv[i];

	for (int i = 0; i < 20; ++i) {
		day_so(l + 15, 1, c, 8, 1);
		Sleep(wt);
	}
	day_so(l + 15, 1, c, 8, 0);
	Sleep(wt * 3);

	hcn(l, 5, w, u, d);

	const int N = 6;
	string s[N];
	s[0] = "1. Bai tap 6.1.";
	s[1] = "2. Bai tap 6.2.";
	s[2] = "3. Bai tap 6.3.";
	s[3] = "4. Bai tap 6.4.";
	s[4] = "5. Thoat.";
	s[5] = "Lua chon cua ban (1-5):";

	const int x = 35;
	const int y[6] = { 7, 9, 11, 13, 15, 19 };

	for (int i = 0; i < N; ++i) {
		GotoXY(x, y[i]);
		cout << s[i];
	}

	return;
}