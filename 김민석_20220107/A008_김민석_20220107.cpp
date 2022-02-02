#include <iostream>
#include <vector>

using namespace std;

int main() {
    int total_num = 0;
    int num = 0;
    int temp = 0;
    double lower_num = 0;
    double total = 0.F;
    vector<int> student;
    
    cin >> total_num;

    for (int i = 0; i < total_num; i ++) {
        total = 0;
        lower_num = 0;
        student.clear();

        cin >> num;

        for (int j = 0; j < num; j ++) {
            cin >> temp;
            student.emplace_back(temp);
            total += student.at(j);
        }

        for (int j = 0; j < num; j ++) {
            if (student.at(j) > total/num) {
                lower_num ++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << lower_num/num*100 << "%\n";
    }

    return 0;
}
