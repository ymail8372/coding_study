#include <iostream>

using namespace std;

int main() {
    string S = "";

    cin >> S;
	int index = 1;
	while (1) {
		cout << S.at(index-1);
		if (index == S.size()) {
			break;
		}
		index ++;
		if ((index-1)%10 == 0) {
			cout << "\n";
		}
	}

    return 0;
}
