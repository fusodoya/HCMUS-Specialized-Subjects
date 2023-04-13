#include "xuat.h"

#include <iostream>
using namespace std;

void xuat(bool check_tang, bool check_doi_xung, bool check_csc) {
	cout << "Mang" << (check_tang ? " tang" : " khong tang") << " dan.\n";
	cout << "Mang" << (check_doi_xung ? " doi xung" : " khong doi xung") << ".\n";
	cout << "Mang" << (check_csc ? " lap thanh" : " khong lap thanh") << " cap so cong.\n";
	return;
}