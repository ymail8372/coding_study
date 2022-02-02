#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N = 0;
	int num = 0;
	int multiple_check = 0;
	vector<int> nums;

	cin >> N;
	for (int i = 0 ; i < N; i ++) {
		cin >> num;
		multiple_check = 0;
		for (int j = 0; j < nums.size(); j ++) {
			if (num == nums.at(j)) {
				multiple_check = 1;
				break;
			}
		}
		if (multiple_check == 0) {
			nums.emplace_back(num);
		}
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i ++) {
		cout << nums.at(i) << " ";
	}

	return 0;
}
