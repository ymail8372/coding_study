#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int num = 0, reverse_num = 0, sum = 0;
	string num_str = "", reverse_num_str = "", sum_str = "";

	cin >> N;
	for (int i = 0; i < N; i ++) {
		reverse_num_str = "";
		cin >> num;
		num_str = to_string(num);

		int num_str_size = num_str.size();
		for (int j = 0; j < num_str_size; j ++) {
			reverse_num_str += num_str.back();
			num_str.pop_back();
		}

		reverse_num = stoi(reverse_num_str);
		sum = num + reverse_num;
		sum_str = to_string(sum);
		
		int sum_str_halfsize = 0;
		if (sum_str.size() % 2 == 1) {
			sum_str_halfsize = sum_str.size()/2+1;
		}
		else {
			sum_str_halfsize = sum_str.size()/2;
		}

		int check = 1;
		for (int j = 0; j < sum_str_halfsize; j ++) {
			if (sum_str.at(j) != sum_str.at(sum_str.size()-1-j)) {
				check = 0;
				break;
			}
		}

		if (check == 1) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}
