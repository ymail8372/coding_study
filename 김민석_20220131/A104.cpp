#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int N = 0, temp = 0;
	int answer = 0;
	vector<int> a;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> temp;
		a.emplace_back(temp);
	}

	sort(a.begin(), a.end());


	for (int i = 0; i < N-1; i ++) {
		answer += a.at(i);
	}

	cout << answer;

	return 0;
}
