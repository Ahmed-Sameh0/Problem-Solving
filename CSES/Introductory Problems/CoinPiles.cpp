// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {
        long long a, b;
        cin >> a >> b;

        long long result = a + b;

        long long bigger = a > b ? a : b;
        long long smaller = a < b ? a : b;
        
        if (result % 3 != 0 || bigger / 2 > smaller) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }

}