#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	
	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do {
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;
		
		if (guess > answer)
			cout << "제시한 정수가 정답보다 높습니다." << endl;
		else if (guess < answer)
			cout << "제시한 정수가 정답보다 낮습니다." << endl;
	} while (guess != answer);

	cout << "축하합니다. 시도 횟수 = " << tries << endl;

	return 0;
}