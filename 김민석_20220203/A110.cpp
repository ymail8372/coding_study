#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL)->sync_with_stdio(0);

	int price = 0;
	int num_of_coin = 0;

	cin >> price;
	price = 1000 - price;

	if (price >= 500) {
		num_of_coin += price/500;
		price = price%500;
	}

	if (price >= 100) {
		num_of_coin += price/100;
		price = price%100;
	}

	if (price >= 50) {
		num_of_coin += price/50;
		price = price%50;
	}

	if (price >= 10) {
		num_of_coin += price/10;
		price = price%10;
	}

	if (price >= 5) {
		num_of_coin += price/5;
		price = price%5;
	}

	if (price >= 1) {
		num_of_coin += price/1;
		price = price%1;
	}

	cout << num_of_coin;

	return 0;
}
