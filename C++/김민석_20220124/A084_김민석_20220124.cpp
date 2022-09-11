#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string word = "";
	string temp = "";
	int word_size = 0;
	vector<string> suffix;

	cin >> word;
	word_size = word.size();
	reverse(word.begin(), word.end());
	for (int j = 0; j < word_size; j ++) {
		temp = word;
		reverse(temp.begin(), temp.end());
		suffix.emplace_back(temp);
		word.pop_back();
	}

	sort(suffix.begin(), suffix.end());
	for (int j = 0; j < suffix.size(); j ++) {
		cout << suffix.at(j) << "\n";
	}

	return 0;
}
