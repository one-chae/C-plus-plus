#include <iostream>
#include <string>
using namespace std;

int main() {
	int list[10];
	int max;

	for (auto& e : list) {
		e = rand() % 100 + 1;
		cout << e << " ";
	}
	cout << endl;
	max = list[0];
	for (auto& e : list) {
		if (e > max)
			max = e;
	}
	cout << "최댓값= " << max << endl;
	return 0;
}