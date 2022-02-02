#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0, K = 0;
	int count = 0;
	int index = 0;

	cin >> N >> K;
	vector<int> nums;
	vector<int> answer;

	for (int i = 0; i < N; i ++) {
		nums.emplace_back(i+1);
	}

	for (int i = 0; i < N; i ++) {
		index = 0;
		do {
			if (nums.at(count%N) != -1) {
				index ++;
			}

			if (index != K) {
				count ++;
			}
		} while (index < K);

		answer.emplace_back(nums.at(count%N));
		nums.at(count%N) = -1;
	}

	cout << "<";
	for (int i = 0; i < N; i ++) {
		cout << answer.at(i);
		if (i != N-1) {
			cout << ", ";
		}
	}
	cout << ">";

	return 0;
}