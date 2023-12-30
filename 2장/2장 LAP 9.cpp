#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
		int x, y, k, i;

	//보드를 초기화한다.
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	//사용자로부터 위치를 받아서 보드에 표시한다.
	for (k = 0; k < 9; k++) {
		cout << "(x, y) 좌표: ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'x' : 'o';  //현재의 순번에 따라 'x', 'o'중 선택

		//보드를 화면에 그린다.
		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}
	return 0;
}