#include <iostream>
using namespace std;

int main()
{
	int r, s, v;

	cout << "반지름: ";
	cin >> r;

	s = 4 * r * r * 3.14;
	v = (4 / 3) * r * r * r * 3.14; //부피가 이상하게 구해짐;; 와이라노;;

	cout << "표면적: " << s << endl;
	cout << "부피: " << v << endl;

	return 0;
}