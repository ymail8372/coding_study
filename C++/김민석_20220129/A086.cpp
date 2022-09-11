#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct number {
	string str;
	int num;
};

bool compareStandard (const number &a, const number &b) {
	return a.str < b.str;
}

int main() {
	int min = 0;
	int max = 0;
	string digit10 = "";
	string digit1 = "";
	struct number a;
	vector<number> str;

	cin >> min >> max;
	for (int i = min; i <= max; i ++) {
		if (i/10 == 0) {
			digit10 = "";
		}
		else if (i/10 == 1) {
			digit10 = "one";
		}
		else if (i/10 == 2) {
			digit10 = "two";
		}
		else if (i/10 == 3) {
			digit10 = "three";
		}
		else if (i/10 == 4) {
			digit10 = "four";
		}
		else if (i/10 == 5) {
			digit10 = "five";
		}
		else if (i/10 == 6) {
			digit10 = "six";
		}
		else if (i/10 == 7) {
			digit10 = "seven";
		}
		else if (i/10 == 8) {
			digit10 = "eight";
		}
		else if (i/10 == 9) {
			digit10 = "nine";
		}
		
		if (i%10 == 0) {
			digit1 = "zero";
		}
		else if (i%10 == 1) {
			digit1 = "one";
		}
		else if (i%10 == 2) {
			digit1 = "two";
		}
		else if (i%10 == 3) {
			digit1 = "three";
		}
		else if (i%10 == 4) {
			digit1 = "four";
		}
		else if (i%10 == 5) {
			digit1 = "five";
		}
		else if (i%10 == 6) {
			digit1 = "six";
		}
		else if (i%10 == 7) {
			digit1 = "seven";
		}
		else if (i%10 == 8) {
			digit1 = "eight";
		}
		else if (i%10 == 9) {
			digit1 = "nine";
		}

		a.num = i;
		a.str = digit10 + digit1;
		str.emplace_back(a);
	}

	sort(str.begin(), str.end(), compareStandard);

	for (int i = 0; i < str.size(); i ++) {
		cout << str.at(i).num << " ";
		if (i%10 == 9) {
			cout << "\n";
		}
	}

	return 0;
}
