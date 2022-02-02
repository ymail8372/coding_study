#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i ++) {
        if (arr.at(i) % divisor == 0) {
            answer.push_back(arr.at(i));
        }
    }
    
    if (answer.empty()) {
        answer.push_back(-1);
    }
    else {
        for (int i = 0; i < answer.size()-1; i ++) {
            for (int j = 0; j < answer.size()-1-i; j ++) {
                if (answer.at(j) > answer.at(j+1)) {
                    int temp = answer.at(j);
                    answer.at(j) = answer.at(j+1);
                    answer.at(j+1) = temp;
                }
            }
        }
    }
    
    return answer;
}
