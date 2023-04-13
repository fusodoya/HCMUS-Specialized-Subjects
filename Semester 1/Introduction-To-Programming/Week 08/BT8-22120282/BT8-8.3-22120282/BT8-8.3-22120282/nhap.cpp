#include "nhap.h"
#include <iostream>
using namespace std;

void nhap(char S[], char &c) {
	cout << "Nhap chuoi = "; cin.getline(S, 99999);
	cout << "Nhap ky tu = "; cin >> c;
	return;
}