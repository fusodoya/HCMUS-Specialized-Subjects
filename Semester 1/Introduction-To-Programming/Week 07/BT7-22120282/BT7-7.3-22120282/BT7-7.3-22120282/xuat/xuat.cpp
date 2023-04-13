#include "xuat.h"

#include <iostream>
using namespace std;

void xuat(int chinh, int phu, bool check_ma_phuong) {
	cout << "Tong cheo chinh = " << chinh << ".\n";
	cout << "Tong cheo phu = " << phu << ".\n";
	cout << "Ma tran" << (check_ma_phuong ? " la" : " khong la") << " ma phuong.\n";
	return;
}