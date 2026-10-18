// https://cses.fi/problemset/submit/1071/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;
        long long answer;
        if (x <= y) {
            if (y % 2 == 0) {
                answer = (y-1) * (y-1) + x;

            }
            else {
                answer = y * y - (x - 1);
            }   
        }
        else {
            if (x % 2 == 0) {
                answer = x * x - (y - 1);
            }
            else {
                answer = (x - 1) * (x - 1) + y;
            }
        }
        cout << answer << "\n";
    }

    

    
}