#include <iostream>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	string str = "";
	int answer = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i ++) {
		if (str.at(i) == 'c' && i <= str.size()-2) {
			if (str.at(i+1) == '-') {
				answer ++;
				i += 1;
			}
			else if (str.at(i+1) == '=') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 'd' && i <= str.size()-3) {
			if (str.at(i+1) == 'z' && str.at(i+2) == '=') {
				answer ++;
				i += 2;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 'd' && i <= str.size()-2) {
			if (str.at(i+1) == '-') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 'l' && i <= str.size()-2) {
			if (str.at(i+1) == 'j') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 'n' && i <= str.size()-2) {
			if (str.at(i+1) == 'j') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 's' && i <= str.size()-2) {
			if (str.at(i+1) == '=') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else if (str.at(i) == 'z' && i <= str.size()-2) {
			if (str.at(i+1) == '=') {
				answer ++;
				i += 1;
			}
			else {
				answer ++;
			}
		}
		else {
			answer ++;
		}
	}

	cout << answer;

	return 0;
}
