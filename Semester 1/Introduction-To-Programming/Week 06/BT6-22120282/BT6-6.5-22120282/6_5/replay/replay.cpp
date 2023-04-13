#include "replay.h"
#include "../goto/goto.h"

#include <iostream>
using namespace std;

void replay(int& n) {

	GotoXY(59, 19);
	cout << "          ";
	GotoXY(59, 19);
	cin >> n;

	GotoXY(0, 23);
	for (int i = 0; i < 100; ++i) cout << "                                        ";
	GotoXY(0, 0);
	GotoXY(0, 23);
	return;
}