#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int broken_string = 0;
	int package_cost = 0, single_cost = 0;
	int package_cost_min = 1000, single_cost_min = 1000;

	cin >> broken_string >> N;
	for (int i = 0; i < N; i ++) {
		cin >> package_cost >> single_cost;

		if (package_cost < package_cost_min) {
			package_cost_min = package_cost;
		}
		if (single_cost < single_cost_min) {
			single_cost_min = single_cost;
		}


	}

	if (single_cost_min*6 < package_cost_min) {
		cout << broken_string*single_cost_min;
	}
	else if (broken_string%6*single_cost_min > package_cost_min) {
		cout << (broken_string/6+1)*package_cost_min;
	}
	else {
		cout << broken_string%6*single_cost_min + broken_string/6*package_cost_min;
	}

	return 0;
}
