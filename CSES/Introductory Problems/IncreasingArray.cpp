//https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    long long required_moves = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            required_moves += (a[i-1] - a[i]);
            a[i] = a[i - 1];
        }
    }

    cout << required_moves << "\n";
}