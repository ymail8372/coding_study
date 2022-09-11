#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> score;
	vector<int> score_sort;
	int num = 0;
	int answer = 0;
	vector<int> index;

	while (cin >> num) {
		score.emplace_back(num);
	}

	score_sort = score;
	sort(score_sort.begin(), score_sort.end());
	reverse(score_sort.begin(), score_sort.end());

	for (int i = 0; i < 5; i ++) {
		answer += score_sort.at(i);
		for (int j = 0; j < score.size(); j ++) {
			if (score.at(j) == score_sort.at(i)) {
				index.emplace_back(j+1);
			}
		}
	}
	sort(index.begin(), index.end());

	cout << answer << "\n";
	for (int i = 0; i < index.size(); i ++) {
		cout << index.at(i) << " ";
	}

	return 0;
}
