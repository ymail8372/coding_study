#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num = 0;
	int answer = 0;
	vector<int> nums;

	cin >> num;
	while (num != 1) {
		if (num % 3 == 0) {
			num /= 3;
		}
		else if ((num-1) % 3 == 0) {
			num --;
		}
		else if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num --;
		}
		answer ++;
	}

	cout << answer;

	return 0;
}
