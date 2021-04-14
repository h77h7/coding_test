#include <iostream>

using namespace std;

const int MAX_NUM = 10000;
char table[5][MAX_NUM + 1] = { 0 };

int main() {
	freopen("output.txt", "w", stdout);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= MAX_NUM; j++) {
			table[i][j] = '-';
		}
	}
	table[0][0] = 'L';
	table[1][0] = 'l';
	table[2][0] = 'g';
	table[3][0] = 'a';
	table[4][0] = 's';

	int tmp;
	for (int i = 1; i <= MAX_NUM; i++) {
		cin >> tmp;
		
		table[tmp - 1][i] = 'o';
	}

	for (int i = 0; i <= MAX_NUM; i++) {
		for (int j = 0; j < 5; j++) {
			cout << table[j][i];
		}
		cout << endl;
	}
}