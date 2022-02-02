#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
	int N = 0;
	vector<int> nums;
	int num = 0;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		nums = {};
		for (int j = 0; j < 10; j ++) {
			cin >> num;
			nums.emplace_back(num);
		}
		sort(nums.begin(), nums.end());
		reverse(nums.begin(), nums.end());
		cout << nums.at(2) << "\n";
	}

	return 0;
}
