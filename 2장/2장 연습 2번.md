#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "콜라, 물, 스프라이트, 주스, 커피 중에서 하나를 선택하세요(앞에서부터 1번): ";
	cin >> num;

	switch (num) {
	case 1:
		cout << "콜라를 선택했습니다.\n";
		break;

	case 2:
		cout << "물을 선택했습니다.\n";
		break;

	case 3:
		cout << "스프라이트를 선택했습니다.\n";
		break;

	case 4:
		cout << "주스를 선택했습니다.\n";
		break;

	case 5:
		cout << "커피를 선택했습니다.\n";
		break;

	default:
		cout << "오류. 선택이 유효하지 않습니다. 돈을 반환합니다.\n";
		break;
	}

	return 0;
}
