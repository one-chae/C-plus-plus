#include <iostream>
using namespace std;

int main() {
	char secret_code = 'h';

	char user;
	cout << "비밀코드를 맞춰보세요: ";
	cin >> user;

	if (user < secret_code)
		cout << user << "뒤에 있음" << endl;
	else if (user > secret_code)
		cout << user << "앞에 있음" << endl;
	else
		cout << "정딥입니다." << endl;

	return 0;
}
