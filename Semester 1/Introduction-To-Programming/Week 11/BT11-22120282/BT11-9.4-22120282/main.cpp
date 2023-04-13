#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int is_char(char c);
void problem(int K);
void solution(int K);

int main() {
	const int K = 7;
	problem(K);
	//solution(K);
	return 0;
}

int is_char(char c) {
	if (c >= 'a' && c <= 'z') return 1;
	if (c >= 'A' && c <= 'Z') return 1;
	return 0;
}

void problem(int K) {
	FILE* f = fopen("D:\\inp.txt", "r");
	FILE* g = fopen("D:\\out.txt", "w");

	if (f == NULL || g == NULL) {
		cout << "Khong mo duoc file!";
	}
	else {
		char c;
		while ((c = fgetc(f)) != EOF) {
			if (is_char(c)) {
				char res = 'a' + (c - 'a' + K % 26 + 26) % 26;
				fprintf(g, "%c", res);
			}
			else {
				fprintf(g, "%c", c);
			}
		}
		fclose(f);
		fclose(g);
	}
	return;
}

void solution(int K) {
	problem(-K);
	return;
}