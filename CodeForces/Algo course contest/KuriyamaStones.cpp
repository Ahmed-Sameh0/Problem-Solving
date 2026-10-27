// https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> unsorted(n + 1), sorted(n + 1);

    for (int i = 1; i < n + 1; i++) {
        cin >> sorted[i];
    }

    for (int i = 1; i < n + 1; i++) {
        unsorted[i] = unsorted[i - 1] + sorted[i];
    }

    sort (sorted.begin(), sorted.end());

    for (int i = 1; i < n + 1; i++) {
        sorted[i] = sorted[i - 1] + sorted[i];
    }

    int x;
    cin >> x;

    for (int i = 0; i < x; i++) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << unsorted[r] - unsorted[l - 1] << "\n";
        }
        else {
            cout << sorted[r] - sorted[l - 1] << "\n";
        }

    }

}