#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	vector<int> nums(N+1);

	nums.at(1) = 0;
	for (int i = 2; i <= N; i ++) {
		nums.at(i) = nums.at(i-1) + 1;
		if (i % 3 == 0) {
			nums.at(i) = min(nums.at(i), nums.at(i/3) + 1);
		}
		if (i % 2 == 0) {
			nums.at(i) = min(nums.at(i), nums.at(i/2) + 1);
		}
	}

	cout << nums.at(N);

	return 0;
}
