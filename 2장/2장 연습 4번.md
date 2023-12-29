#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, i;
	
	for (i = 0; i < 5; i++)
	{
		cout << "정수를 다섯 개 입력하세요(단, 5는 절대로 입력하지 마세요!): ";
		cin >> a >> b >> c >> d >> e;

		if (a == 5 || b == 5 || c == 5 || d == 5 || e== 5) {
			cout << "5를 입력하였군요! 컴퓨터 승!" << endl;
		}
		else {
			cout << "인내심이 강합니다! 사용자 승!" << endl;
		}
		return 0;
	}
}