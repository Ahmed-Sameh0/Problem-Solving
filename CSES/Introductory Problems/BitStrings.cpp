// https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    const long long mod = 1000000007;
    long long result = 1;
    for (long long i = 0; i < n; i++) {
        result = (result * 2) % mod;
    }
    cout << result << "\n";
}