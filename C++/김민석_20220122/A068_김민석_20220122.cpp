#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N = 0;
	int num = 0;
	string commend = "";
	queue<int> que;
	
	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> commend;
		if (commend == "push") {
			cin >> num;
			que.push(num);
		}
		else if (commend == "pop") {
			if (que.size() != 0) {
				cout << que.front() << "\n";
				que.pop();
			}
			else {
				cout << "-1\n";
			}
		}
		else if (commend == "size") {
			cout << que.size() << "\n";
		}
		else if (commend == "empty") {
			if (que.size() == 0) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (commend == "front") {
			if (que.size() != 0) {
				cout << que.front() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (commend == "back") {
			if (que.size() != 0) {
				cout << que.back() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}

	return 0;
}
