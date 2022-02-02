#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    double num = 0.F;
    string opr = "";

    cin >> N;
    cout << fixed;
    cout.precision(2);
    
    for (int i = 0; i < N; i ++) {
        opr = "";

        cin >> num;
        getline(cin, opr);
        
        for (int j = 1; j < opr.size(); j += 2) {
            if (opr.at(j) == '@') {
                num *= 3;
            }
            else if (opr.at(j) == '%') {
                num += 5;
            }
            else if (opr.at(j) == '#') {
                num -= 7;
            }
        }
        
        cout << num << "\n";
    }

    return 0;
}
