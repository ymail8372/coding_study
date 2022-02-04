#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int N = 0;
	ostringstream stream;

	stream << fixed;
	stream << setprecision(0);

	cin >> N;
	for (int i = 0; i < N; i ++) {
		int num_of_station = 0;
		cin >> num_of_station;

		double num_of_people = 0;
		for (int j = 0; j < num_of_station; j ++) {
			num_of_people += 0.5;
			num_of_people *= 2;
		}

		stream << num_of_people;
		string num_of_people_str = stream.str();


		cout << num_of_people_str << "\n";
	}

	return 0;
}
