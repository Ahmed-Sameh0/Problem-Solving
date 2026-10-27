// https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nTest;
    cin >> nTest;

    for (int i = 0; i < nTest; i++) {
        int xorResult = 0;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j]; 
        }

        for (int j = 0; j < n; j++) {
            xorResult = xorResult ^ v[j];
        }

        if (n % 2 == 0 && xorResult == 0) {
            cout << 0 << "\n";
        }
        else if (n % 2 != 0) {
            cout << xorResult << "\n";
        }
        else{
            cout << -1 << "\n";
        }
   }
}