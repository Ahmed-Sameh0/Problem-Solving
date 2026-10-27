// https://codeforces.com/problemset/problem/670/D2
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ingredients, magicPowder;
    cin >> ingredients >> magicPowder;

    vector<int> gramsNeeded(ingredients);
    for (int i = 0; i < ingredients; i++) {
        cin >> gramsNeeded[i];
    }

    vector<int> gramsOwned(ingredients);
    for (int i = 0; i < ingredients; i++) {
        cin >> gramsOwned[i];
    }

    vector<long long> diff(ingredients);
    long long low = 0, high = 2000000001LL;
    while (true) {
        if (high - low <= 1) break;
        long long mid = (low + high) / 2;
        long long need = 0;
        bool ok = true;
        for (int i = 0; i < ingredients; i++){
            diff[i] = (long long)gramsNeeded[i] * mid - gramsOwned[i];
            if (diff[i] > 0) {
                need += diff[i];
                if (need > magicPowder) { ok = false; break; }
            }
        }
        if (ok) low = mid;
        else high = mid;
    }
    cout << low;
    cout << "\n";

}