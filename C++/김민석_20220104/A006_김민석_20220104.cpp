#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int nump = 0;
    int numy = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    
    for (int i = 0; i < s.size(); i ++) {
        if (s.at(i) == 'p' || s.at(i) == 'P') {
            nump ++;
        }
        else if (s.at(i) == 'y' || s.at(i) == 'Y') {
            numy ++;
        }
    }
    
    if (nump == numy) {
        answer = true;
    }
    else {
        answer = false;
    }

    return answer;
}
