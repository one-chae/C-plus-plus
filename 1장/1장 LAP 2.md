#include <iostream>
using namespace std;

int main()
{
	long double c_temp;
	double f_temp;

	cout << "화씨온도를 입력하세요: ";
	cin >> f_temp;
	
	c_temp = (5.0 / 9.0) * (f_temp - 32);

	cout << "화씨온도 " << f_temp << "는 섭씨온도 " << c_temp << "입니다." << endl;

	return 0;
}