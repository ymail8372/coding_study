#include <iostream>

using namespace std;

int main() {
	string str = "";
	char cha = 0;

	cin >> str;
	for (int i = 0; i < str.size(); i ++) {
		cha = str.at(i)-3;
		if (cha < 'A') {
			cha += 26;
		}
		cout << cha;
	}

	return 0;
}
