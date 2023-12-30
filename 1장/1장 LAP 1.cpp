#include <iostream>
using namespace std;

int main()
{
	int money;
	int candy_price;

	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> candy_price;

	//최대로 살 수 있는 캔디의 개수랑 현재 구입 후 남은 돈 자체도 이름 만들어서 int에 지정하는 게 좋음
	cout << "최대로 살 수 있는 캔디의 개수 = " << money / candy_price << endl;
	cout << "현재 구입 후 남은 돈 = " << money - candy_price * (money / candy_price) << endl;

	return 0;
}