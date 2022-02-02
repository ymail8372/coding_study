#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	vector<int> nums;
	int num = 0;

	cin >> num;
	string str = to_string(num);
	for(int i = 0; i < str.size(); i ++) {
		nums.emplace_back(str.at(i));
	}

	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i ++) {
		cout << nums.at(i)-'0';
	}
	
	return 0;
}
