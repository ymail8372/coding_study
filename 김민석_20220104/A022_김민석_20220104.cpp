#include <iostream>
#include <vector>

using namespace std;

int main() {
    int phone_num = 0;
    vector<int> time;
	int charge1 = 0, charge2 = 0;

    cin >> phone_num;

	int temp = 0;
    for (int i = 0; i < phone_num; i ++) {
		cin >> temp;
		time.emplace_back(temp);
    }

	for (int i = 0; i < phone_num; i ++) {
		charge1 += (time.at(i)/30 + 1) * 10;
		charge2 += (time.at(i)/60 + 1) * 15;
	}

	if (charge1 < charge2) {
		cout << "Y " << charge1;
	}
	else if (charge2 < charge1) {
		cout << "M " << charge2;
	}
	else {
		cout << "Y M " << charge1;
	}

    return 0;
}
