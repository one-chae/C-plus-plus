#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cin >> dice1;
	cin >> dice2;
	
	cout << "두 주사위 합 = " << dice1 + dice2 << endl;

	return 0;
}