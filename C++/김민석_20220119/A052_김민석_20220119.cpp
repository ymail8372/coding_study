#include <iostream>

using namespace std;

int main() {
	int N = 0;
	string str = "";
	int num = 0;
	int total = 0;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		total = 0, num = 0;		
		cin >> str;
		for (int j = 0; j < str.size(); j ++) {
			if (str.at(j) == 'O') {
				num ++;
				if (j == str.size()-1) {
					for (int k = 0; k < num; k ++) {
						total += k+1;
					}
				}
			}
			else {
				for (int k = 0; k < num; k ++) {
					total += k+1;
				}
				num = 0;
			}
		}
		cout << total << '\n';
	}
	
	return 0;
}