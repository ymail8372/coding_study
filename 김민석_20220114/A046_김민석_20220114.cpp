#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0;
	vector<int> alp;
	vector<char> over5;
	string str = "";
	alp.assign(26, 0);

	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> str;
		alp.at(str.at(0)-97) ++;
	}

	for (int i = 0; i < alp.size(); i ++) {
		if (alp.at(i) >= 5) {
			over5.emplace_back(97+i);
		}
	}

	if (over5.size() == 0) {
		cout << "PREDAJA";
	}
	else {
		for (int i = 0; i < over5.size(); i ++) {
			cout << (char)over5.at(i);
		}
	}

	return 0;
}
