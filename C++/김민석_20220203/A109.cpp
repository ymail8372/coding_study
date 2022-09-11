#include <iostream>
#include <vector>

using namespace std;

struct belt {
	double a;
	double b;
	int shape;
};

int main() {
	cin.tie(NULL)->sync_with_stdio(NULL);

	int N = 0;
	vector<belt> belts;

	cin >> N;
	for (int i = 0; i < N; i ++) {
		double temp_a = 0, temp_b = 0;
		int temp_shape = 0;
		cin >> temp_a >> temp_b >> temp_shape;
		belt temp_belt;
		temp_belt.a = temp_a;
		temp_belt.b = temp_b;
		temp_belt.shape = temp_shape;

		belts.emplace_back(temp_belt);
	}

	int total_shape_1 = 0;
	for (int i = 0; i < N; i ++) {
		if (belts.at(i).shape == 1) {
			total_shape_1 ++;
		}
	}

	double role_num = 1.0;
	for (int i = 0; i < N; i ++) {
		role_num *= belts.at(i).b/belts.at(i).a;
		// cout << "role_num : " << role_num << "\n";
	}

	// cout << "total_shape_1 : " << total_shape_1 << "\n";
	if (total_shape_1 % 2 == 0) {
		cout << "0 ";
	}
	else {
		cout << "1 ";
	}

	cout << role_num;

	return 0;
}
