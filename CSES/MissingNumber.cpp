//https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = 0;

    for (int i = 0; i < n - 1; i++){
        int x;
        cin >> x;
        sum += x;
    }

    long long result = n * (n + 1) / 2;
    cout << result - sum << '\n';
}