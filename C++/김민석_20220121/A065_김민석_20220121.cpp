#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<vector<int>> dot;
	int N = 0;
	int x = 0, y = 0;
	vector<int> temp;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> x >> y;
		temp.emplace_back(x);
		temp.emplace_back(y);
		dot.emplace_back(temp);
		temp.clear();
	}

	sort(dot.begin(), dot.end());

	for (int i = 0; i < dot.size(); i ++) {
		cout << dot.at(i).at(0) << " " << dot.at(i).at(1) << "\n";
	}

	return 0;
}
