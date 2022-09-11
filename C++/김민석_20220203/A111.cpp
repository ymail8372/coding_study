#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N = 0;
	int num_of_station = 0;
	double num_of_people = 0;

	ostringstream stream;
	stream << fixed;
	stream << setprecision(0);

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> num_of_station;

		num_of_people = 0;
		for (int j = 0; j < num_of_station; j ++) {
			num_of_people += 0.5;
			num_of_people *= 2;
		}

		stream.str("");
		stream << num_of_people;
		string num_of_people_str = stream.str();

		cout << num_of_people_str << "\n";
	}

	return 0;
}
