#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    string str = "";
    
    for (int i = 0; i < skill_trees.size(); i ++) {
        str = "";
        for (int j = 0; j < skill_trees.at(i).size(); j ++) {
            for (int k = 0; k < skill.size(); k ++) {
                if (skill_trees.at(i).at(j) == skill.at(k)) {
                    str.push_back(skill_trees.at(i).at(j));
                }
            }
        }
        cout << "str : " << str << '\n';
        
        int check = 0;
        int min = 0;
        if (skill.size() > str.size()) {
            min = str.size();
        }
        else {
            min = skill.size();;
        }
        for (int j = 0; j < min; j ++) {
            if (skill.at(j) != str.at(j)) {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            answer ++;
        }
    }
    
    return answer;
}

