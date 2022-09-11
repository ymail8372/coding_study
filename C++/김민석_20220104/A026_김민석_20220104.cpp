#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int origin_x = x;
    int num = 0;
    int ten = 10000;
    int degree = 4;
    int division = 1;
    
    while (1) {
        if (x / ten > 0) {
            break;
        }
        else {
            degree --;
            ten /= 10;
        }
    }
    
    for (int i = 0; i < degree; i ++) {
        division *= 10;
    }
    
    for (int i = 0; i < degree+1; i ++) {
        num += x / division;
        x = x % division;
        division /= 10;
    }
    
    if (origin_x % num == 0) {
        answer = true;
    }
    else {
        answer = false;
    }
    
    return answer;
}
