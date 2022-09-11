#include <iostream>
#include <vector>

using namespace std;

struct computer {
	int num;
	vector<int> connected_coms;
	int infection_check;
};

void infection (vector<computer*> coms, int index) {
	if (coms.at(index)->infection_check == 0) {
		coms.at(index)->infection_check = 1;
		for (int i = 0; i < coms.at(index)->connected_coms.size(); i ++) {
			infection (coms, coms.at(index)->connected_coms.at(i)-1);
		}
	}
	else {
		return;
	}
}

int main() {
	int N = 0, con = 0;
	int com1 = 0, com2 = 0;
	vector<computer*> coms;

	cin >> N >> con;
	for (int i = 0; i < N; i ++) {
		computer* new_com = new computer;
		new_com->num = i+1;
		new_com->infection_check = 0;
		coms.emplace_back(new_com);
	}

	for (int i = 0; i < con; i ++) {
		cin >> com1 >> com2;
		coms.at(com1-1)->connected_coms.emplace_back(com2);
		coms.at(com2-1)->connected_coms.emplace_back(com1);
	}

	// for (int i = 0; i < coms.size(); i ++) {
	// 	cout << "num : " << coms.at(i)->num << ", connected : ";
	// 	for (int j = 0; j < coms.at(i)->connected_coms.size(); j ++) {
	// 		cout << coms.at(i)->connected_coms.at(j) << " ";
	// 	}
	// 	cout << "\n";
	// }

	coms.at(0)->infection_check = 1;
	for (int i = 0; i < coms.at(0)->connected_coms.size(); i ++) {
		infection(coms, coms.at(0)->connected_coms.at(i)-1);
	}


	// for (int i = 0; i < coms.size(); i ++) {
	// 	cout << "num : " << coms.at(i)->num << ", infection : " << coms.at(i)->infection_check << "\n";
	// }

	int answer = 0;
	for (int i = 1; i < coms.size(); i ++) {
		if (coms.at(i)->infection_check == 1) {
			answer ++;
		}
	}

	cout << answer;

	return 0;
}
