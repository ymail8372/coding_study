#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int index_front = 0, index_end = people.size()-1;
    int double_boat = 0;

    sort(people.begin(), people.end());

    while (1) {
        if (index_front >= index_end) {
            break;
        }

        if (people.at(index_front) + people.at(index_end) <= limit) {
            double_boat ++;

            index_front ++;
            index_end --;
        }
        else {
            index_end --;
        }
    }

    answer = double_boat + (people.size() - double_boat*2);
    
    return answer;
}
