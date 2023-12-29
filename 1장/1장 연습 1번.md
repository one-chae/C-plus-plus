#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout << "주어: ";
	cin >> s;

	string v;
	cout << "동사: ";
	cin >> v;

	string o;
	cout << "목적어: ";
	cin >> o;

	cout << s + " " + v + " " + "a" + " " + o << endl;

	return 0;
}

