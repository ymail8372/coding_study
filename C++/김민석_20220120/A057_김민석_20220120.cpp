#include <string>
#include <vector>

using namespace std;

int check(vector<int> cookie, int i, int j);
int solution(vector<int> cookie);

int solution(vector<int> cookie) {
    int answer = 0;

	for (int i = 0; i < cookie.size()-1; i ++) {
		answer = check(cookie, i, i+1) > answer ? check(cookie, i, i+1) : answer;
	}

    return answer;
}

int check(vector<int> cookie, int i, int j) {
	int start_sum = cookie.at(i), end_sum = cookie.at(j);
	int max = 0;
	while (1) {
		if (start_sum == end_sum) {
			max = start_sum;
			if (i != 0) {
				i --;
				start_sum += cookie.at(i);
			}
			else if (j != cookie.size()-1) {
				j ++;
				end_sum += cookie.at(j);
			}
			else {
				break;
			}
			continue;
		}

		if ((i == 0 && (start_sum < end_sum)) || (j == cookie.size()-1 && (start_sum > end_sum)) || (i == 0 && j == cookie.size()-1)) {
			start_sum = 0;
			break;
		}

		if (start_sum < end_sum) {
			i --;
			start_sum += cookie.at(i);
		}
		else if (start_sum > end_sum) {
			j ++;
			end_sum += cookie.at(j);
		}
	}
	
	return max;
}
