#include <iostream>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int N = 0;
	int sum = 0;
	int denominator = 0, numerator = 0;

	cin >> N;

	for (int i = 1; i <= N; i ++) {
		sum += i;
		if (N > sum-i && N <= sum) {
			if (i % 2 == 0) {
				denominator = sum - N + 1;
				numerator = i+1 - denominator;
				break;
			}
			else if (i % 2 == 1) {
				numerator = sum - N + 1;
				denominator = i+1 - numerator;
				break;
			}
		}
	}

	cout << numerator << "/" << denominator;

	return 0;
}
