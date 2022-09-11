#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> failPersent;
    int total = 0;
    int fail = 0;
    int temp = 0;
    
    for (int i = 0; i < N; i ++) {
        total = 0;
        fail = 0;
        temp = i+1;
        for (int k = 1; k < stages.size()+1; k ++) {
            if (stages.at(k-1) >= temp) {
                total ++;
            }
            if (stages.at(k-1) == temp) {
                fail ++;
            }
        }
        total == 0 ? failPersent.emplace_back(0.0) : failPersent.emplace_back((fail*1.0)/(total*1.0));
    }
    
    double max = 0.0;
    int max_index = 0;
    for (int i = 0; i < N; i ++) {
        max = 0.0;
        for (int j = N-1; j >=0; j --) {
            if (failPersent.at(j) >= max) {
                max = failPersent.at(j);
                max_index = j;
            }
        }
        failPersent.at(max_index) = -1.0;
        answer.emplace_back(max_index+1);
    }
    
    return answer;
}
