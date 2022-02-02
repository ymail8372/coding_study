#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void reverse(char s[]) {
	for (int i = 0; i < strlen(s)/2; i ++) {
		char temp = s[i];
		s[i] = s[strlen(s)-1-i];
		s[strlen(s)-1-i] = temp;
	}
}

int main() {
	char num1[10002] = {0};
	char num2[10002] = {0};
	char result[10003] = {0};
	int carry = 0, sum = 0;
	int size = 0;

	cin >> num1 >> num2;
	size = strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2);

	reverse(num1);
	reverse(num2);

	for (int i = 0; i < size; i ++) {
		if (num1[i] == 0) {
			sum = num2[i] + carry;
		}
		else if (num2[i] == 0) {
			sum = num1[i] + carry;
		}
		else {
			sum = num1[i] + num2[i] + carry - '0';
		}
		carry = 0;
		if (sum > '9') {
			if (i == size-1) {
				result[i+1] = '1';
			}
			carry = 1;
			sum -= 10;
		}
		result[i] = sum;
	}

	reverse(result);
	cout << result;

	return 0;
}
