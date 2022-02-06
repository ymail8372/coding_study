#include <iostream>
#include <vector>

using namespace std;

struct node {
	int num;
	int linked;
	int check;
};

int main() {
	int dot_num = 0;
	int line_num = 0;
	int dot1 = 0, dot2 = 0;
	vector<node> node_list;

	cin >> dot_num >> line_num;
	for (int i = 0; i < line_num; i ++) {
		cin >> dot1 >> dot2;
		struct node node_temp;
		node_temp.num = dot1;
		node_temp.linked = dot2;
		node_temp.check = 0;

		node_list.emplace_back(node_temp);
	}

	int check = 0;
	int index = 0;
	int answer = 0;
	for (int i = 0; i < line_num; i ++) {
		while(1) {
			check = 0;
			if (node_list.at(i).linked == 0 || node_list.at(i).check == 1) {
				break;
			}
			else 

			if (node_list.at(node_list.at(i).linked) == 0 || node_list.at(node_list.at(i).check) == 1) {
				
			}
			

		}
	}

	return 0;
}
