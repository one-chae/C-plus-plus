#include <iostream>
using namespace std;

int main()
{
	const int days = 12;
	int list[days] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < 12; i++) {
		cout << i+1 << "월은 " << list[i] << "일까지 있습니다." << endl;
	}
	return 0;
}