#include <iostream>
using namespace std;

int main()
{
	int i, sum;
	sum = 0;

	do {
		cout << "정수를 입력하시오(0 입력 시 프로그램 종료): ";
		cin >> i;
		
		if (i != 0) {
			sum += i;	
		}
	} while (i != 0);

	cout << "합계: " << sum << endl;
	
	return 0;
}