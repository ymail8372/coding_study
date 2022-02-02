#include <iostream>
#include <vector>

using namespace std;

struct member {
	int age;
	string name;
};

int main() {
	int N = 0;
	int age = 0;
	string name = "";
	struct member a;
	vector<member> members[200];

	cin >> N;
	for (int i = 0; i < N; i ++) {
		cin >> age >> name;
		a.age = age;
		a.name = name;

		members[a.age-1].emplace_back(a);
	}

	for (int i = 0; i < 200; i ++) {
		for (int j = 0; j < members[i].size(); j ++) {
			cout << members[i].at(j).age << " " << members[i].at(j).name << "\n";
		}
	}

	return 0;
}
