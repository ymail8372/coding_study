#include <iostream>
#include <vector>

#define input_max 1001

using namespace std;

vector<vector<bool>> map(input_max, vector<bool>(input_max, 0));
vector<bool> check(input_max, 0);
int N = 0, M = 0;
int result = 0;

void init() {
	cin.tie(0)->sync_with_stdio(0);
}

void dfs(int num) {
	check.at(num) = true;
	
	for (int i = 1; i <= N; i ++) {
		if (map.at(num).at(i) != false && check.at(i) == false) {
			dfs(i);
		}
	}
}

int main() {
	init();

	cin >> N >> M;

	for (int i = 0; i < M; i ++) {
		int a = 0, b = 0;
		cin >> a >> b;
		map.at(a).at(b) = true;
		map.at(b).at(a) = true;
	}

	for (int i = 1; i <= N; i ++) {
		if (check.at(i) == 0) {
			result ++;
			dfs(i);
		}
	}

	cout << result;

	return 0;
}
