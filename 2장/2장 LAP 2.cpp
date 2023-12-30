#include <iostream>
using namespace std;

int main() {
	int x, y, z;

	cout << "세 개의 정수를 입력하시오: ";
	cin >> x >> y >> z;

	if (x >= y && x >= z)
		cout << "가장 큰 정수는 " << x << "입니다." << endl;
	else if (y >= x && y >= z)
		cout << "가장 큰 정수는 " << y << "입니다." << endl;
	else
		cout << "가장 큰 정수는 " << z << "입니다." << endl;

	return 0;
}