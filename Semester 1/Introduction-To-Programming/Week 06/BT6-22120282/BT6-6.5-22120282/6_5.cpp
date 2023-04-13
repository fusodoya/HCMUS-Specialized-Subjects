#include "6_1/6_1.h"
#include "6_2/6_2.h"
#include "6_3/6_3.h"
#include "6_4/6_4.h"
#include "6_5/rand/rand.h"
#include "6_5/goto/goto.h"
#include "6_5/replay/replay.h"

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	ve_menu();
	while (true) {
		int c_type; replay(c_type);
		if (c_type == 5) break;
		if (c_type == 1) main_6_1();
		if (c_type == 2) main_6_2();
		if (c_type == 3) main_6_3();
		if (c_type == 4) main_6_4();
		if (c_type < 1 || c_type > 4) cout << "Oh no chua co lua chon nay, hay cho o nhung lan update sau nhe <3\n";
	}
	return 0;
}