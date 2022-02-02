#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	// cin.tie(NULL);

	int N = 0;
	stack<int> st;
	int push_num, pop_num = 0;
	string commend;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> commend;
		if (commend == "push") {
			cin >> push_num;
			st.emplace(push_num);
		}
		else if (commend == "pop") {
			if (st.size() != 0) {
				cout << st.top() << "\n";
				st.pop();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (commend == "size") {
			cout << st.size() << "\n";
		}
		else if (commend == "empty") {
			cout << st.empty() << "\n";
		}
		else if (commend == "top") {
			if (st.size() != 0) {
				cout << st.top() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}

	return 0;
}
