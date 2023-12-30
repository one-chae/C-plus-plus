#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;

	cout << "퀴즈 1 성적: ";
	cin >> a;
	
	cout << "퀴즈 2 성적: ";
	cin >> b;

	cout << "퀴즈 3 성적: ";
	cin >> c;

	cout << "중간고사 성적: ";
	cin >> d;

	cout << "기말고사 성적: ";
	cin >> e;

	cout << "=========================" << endl;
	cout << "성적 총합: " << a + b + c + d + e << endl;
	cout << "=========================" << endl;

	return 0;
}