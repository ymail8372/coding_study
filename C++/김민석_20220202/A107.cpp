#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums;
	int start = 0, end = 0;
	int sum = 0;

	for (int i = 1; i < 100; i ++) {
		for (int j = 0; j < i; j ++) {
			if (nums.size() > 1000) {
				break;
			}
			nums.emplace_back(i);
		}
	}

	cin >> start >> end;

	for (int i = start-1; i <= end-1; i ++) {
		sum += nums.at(i);
	}

	cout << sum;

	return 0;
}
