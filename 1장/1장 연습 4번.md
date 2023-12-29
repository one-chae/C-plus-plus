#include <iostream>
using namespace std;

int main()
{
	int l, w, h, v, s;

	cout << "길이: ";
	cin >> l;
	cout << "너비: ";
	cin >> w;
	cout << "높이: ";
	cin >> h;

	v = l * w * h;
	s = 2 * (l * w + l * h + w * h);

	cout << "상자의 부피: " << v << endl;
	cout << "상자의 표면적: "<< s << endl;

	return 0;
}