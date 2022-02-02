#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	int continuity = 0;
	vector<int> alp;
	string temp_string = "";
	int check = 1;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		alp.assign(26, 0);
		check = 1;
		cin >> temp_string;
		alp.at(temp_string.at(0)-97) ++;
		for (int j = 1; j < temp_string.size(); j ++) {
			if (temp_string.at(j-1) != temp_string.at(j)) {
				if (alp.at(temp_string.at(j)-97) == 0) {
					alp.at(temp_string.at(j)-97) ++;
				}
				else if (alp.at(temp_string.at(j)-97) == 1) {
					check = 0;
					break;
				}
			}
		}
		if (check == 1) {
			continuity ++;
		}
	}

	cout << continuity;

	return 0;
}
