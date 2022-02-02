#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int temp = 0;

    for (int i = 0; i < 5; i ++) {
        cin >> temp;
        num += temp * temp;
    }

    cout << num % 10;

    return 0;
}
