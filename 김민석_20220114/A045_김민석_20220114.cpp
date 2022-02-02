#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> alp;
	alp.assign(26, 0);
	string str = "";

	cin >> str;

	for (int i = 0; i < str.size(); i ++) {
		if (97 <= (int)str.at(i) && (int)str.at(i) <= 122) {
			alp.at(str.at(i)-97) ++;
		}
		else if (65 <= (int)str.at(i) && (int)str.at(i) <= 90) {
			alp.at(str.at(i)-65) ++;
		}
	}

	int max = 0, index = 0;
	int check = 0;
	for (int i = 0; i < 26; i ++) {
		if (alp.at(i) > max) {
			check = 0;
			index = i;
			max = alp.at(i);
		}
		else if (alp.at(i) == max) {
			check = 1;
		}
	}

	if (check == 1) {
		cout << "?";
	}
	else {
		cout << (char)(65+index);
	}

	return 0;
}
