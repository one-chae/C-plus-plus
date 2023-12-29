#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	
	cout << "시: ";
	cin >> h;

	cout << "분: ";
	cin >> m;

	cout << "초: ";
	cin >> s;

	cout << "전체 초: " << h * 3600 + m * 60 + s << endl;

	return 0;
}