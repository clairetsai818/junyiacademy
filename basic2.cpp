#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int input;
    int cnt = 0;
    cin >> input;
    for (int i = 1;i <= input;i++) {
        if (i % 15 == 0) {
            cnt ++;
        }
        else if ((i % 5 == 0) || (i % 3 ==0)) {
            continue;
        }
        else {
            cnt++;
        }
    }
    cout << cnt;
}
