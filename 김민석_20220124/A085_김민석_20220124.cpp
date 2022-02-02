#include <iostream>
#include <vector>

using namespace std;

struct serial_number {
	string number;
	int sum;
};

int main() {
	int N = 0;
	string str_temp = "";
	serial_number temp;
	vector<serial_number> a[50];

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> str_temp;
		temp.number = str_temp;
		temp.sum = 0;
		for (int j = 0; j < str_temp.size(); j ++) {
			if (str_temp.at(j) >= '0' && str_temp.at(j) <= '9') {
				temp.sum += str_temp.at(j)-'0';
			}
		}
		a[str_temp.size()-1].emplace_back(temp);
	}

	for (int i = 0; i < 50; i ++) {
		if (a[i].size() > 1) {
			for (int j = 0; j < a[i].size()-1; j ++) {
				for (int k = 0; k < a[i].size()-j-1; k ++) {
					if (a[i].at(k).sum > a[i].at(k+1).sum) {
						temp = a[i].at(k);
						a[i].at(k) = a[i].at(k+1);
						a[i].at(k+1) = temp;
					}
				}
			}
		}
	}

	for (int i = 0; i < 50; i ++) {
		if (a[i].size() > 1) {
			for (int j = 0; j < a[i].size()-1; j ++) {
				for (int k = 0; k < a[i].size()-j-1; k ++) {
					if (a[i].at(k).sum == a[i].at(k+1).sum && a[i].at(k).number > a[i].at(k+1).number) {
						temp = a[i].at(k);
						a[i].at(k) = a[i].at(k+1);
						a[i].at(k+1) = temp;
					}
				}
			}
		}
	}

	for (int i = 0; i < 50; i ++) {
		for (int j = 0; j < a[i].size(); j ++) {
			cout << a[i].at(j).number << "\n";
		}
	}

	return 0;
}
