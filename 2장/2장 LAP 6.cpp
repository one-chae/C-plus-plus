#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int i, ans;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true) {

		int x = rand() % 100;
		int y = rand() % 100;
		i = x + y;

		cout << x << " + " << y << " = ";
		cin >> ans;

		if (i == ans) {
			cout << "맞았습니다." << endl;
			break;
		}
		else {
			cout << "정답이 아닙니다." << endl;
		}
		
		return 0;
	}
}