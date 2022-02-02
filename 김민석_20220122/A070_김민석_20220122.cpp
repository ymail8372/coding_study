#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N = 0;
	queue<int> card;
	
	cin >> N;
	for (int i = 0; i < N; i ++) {
		card.emplace(i+1);
	}

	while (true) {
		if (card.size() == 1) {
			break;
		}

		card.pop();

		if (card.size() == 1) {
			break;
		}

		card.emplace(card.front());
		card.pop();
	}

	cout << card.front();

	return 0;
}
