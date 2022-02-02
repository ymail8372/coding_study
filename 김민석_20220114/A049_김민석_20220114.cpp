#include <iostream>

using namespace std;

int main() {
	string password = "";

	int consonant = 0, gather = 0;
	int check = 1;
	while (cin >> password) {
		check = 1;
		if (password == "end") {
			break;
		}

		if (password.find('a') == string::npos && password.find('e') == string::npos && password.find('i') == string::npos && password.find('o') == string::npos && password.find('u') == string::npos) {
			cout << "<" << password << "> is not acceptable.\n";
			continue;
		}

		for (int i = 1; i < password.size(); i ++) {
			if (password.at(i-1) == password.at(i)) {
				if (password.at(i-1) != 'e' && password.at(i-1) != 'o') {
					check = 0;
				}
			}
		}
		if (check == 0) {
			cout << "<" << password << "> is not acceptable.\n";
			continue;
		}

		consonant = 0, gather = 0;
		for (int i = 0; i < password.size(); i ++) {
			if (password.at(i) == 'a' || password.at(i) == 'e' || password.at(i) == 'i' || password.at(i) == 'o' || password.at(i) == 'u') {
				consonant = 0;
				gather ++;
			}
			else {
				gather = 0;
				consonant ++;
			}
			if (consonant == 3 || gather == 3) {
				check = 0;
			}
		}
		if (check == 0) {
			cout << "<" << password << "> is not acceptable.\n";
			continue;
		}

		cout << "<" << password << "> is acceptable.\n";
	}

	return 0;
}
