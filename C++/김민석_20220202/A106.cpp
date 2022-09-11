#include <iostream>
#include <set>

using namespace std;

int main() {
	set<char> alphabet;
	string str = "";
	int N = 0;
	int answer = 2015;

	cin >> N;

	for (int i = 0; i < N; i ++) {
		alphabet.clear();
		answer = 2015;
		cin >> str;
		for (int j = 0; j < str.size(); j ++) {
			if (alphabet.find(str.at(j)) == alphabet.end()) {
				alphabet.emplace(str.at(j));
				answer -= str.at(j);
			}
		}

		cout << answer << "\n";
	}

	return 0;
}
