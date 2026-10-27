// https://codeforces.com/problemset/problem/474/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nPiles;
    cin >> nPiles;
    vector<long long> sum(nPiles + 1);

    for (int i = 1; i <= nPiles; i++) {
        cin >> sum[i];
        sum[i] = sum[i - 1] + sum[i];
    }

    int juicy;
    cin >> juicy;

    for (int i = 0; i < juicy; i++) {
        int x;
        cin >> x;
        int index = lower_bound(sum.begin() + 1, sum.end(), x) - sum.begin();
        cout << index << "\n";
    }


}