#include <iostream>
#include <vector>

using namespace std;

int main() {
	string str = "";
	int total = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i ++) {
		if (str.at(i) >= 'A' && str.at(i) <= 'C') {
			total += 3;
		}
		else if (str.at(i) >= 'D' && str.at(i) <= 'F') {
			total += 4;
		}
		else if (str.at(i) >= 'G' && str.at(i) <= 'I') {
			total += 5;
		}
		else if (str.at(i) >= 'J' && str.at(i) <= 'L') {
			total += 6;
		}
		else if (str.at(i) >= 'M' && str.at(i) <= 'O') {
			total += 7;
		}
		else if (str.at(i) >= 'P' && str.at(i) <= 'S') {
			total += 8;
		}
		else if (str.at(i) >= 'T' && str.at(i) <= 'V') {
			total += 9;
		}
		else if (str.at(i) >= 'W' && str.at(i) <= 'Z') {
			total += 10;
		}
	}

	cout << total;

	return 0;
}
