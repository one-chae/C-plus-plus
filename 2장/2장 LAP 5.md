#include <iostream>
using namespace std;

int main() {
	int n, r, a, b, x, y;
	
	cout << "도형을 선택하시오(1=원, 2=삼각형, 3=사각형): ";
	cin >> n;

	if (n == 1) {
		cout << "반지름: ";
		cin >> r;
		cout << "면적: " << r * r * 3.14 << endl;
	}
	else if (n == 3) {
		cout << "가로: ";
		cin >> a;
		cout << "세로: ";
		cin >> b;
		cout << "면적: " << a * b << endl;
	}
	else if (n == 2) {
		cout << "밑변: ";
		cin >> x;
		cout << "높이: ";
		cin >> y;
		cout << "면적: " << x * y * 0.5 << endl;
	}
	else {
		cout << "유효하지 않은 선택입니다." << endl;
	}
	return 0;
}