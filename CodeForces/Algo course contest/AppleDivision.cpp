// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
using namespace std;

void divide_apples(vector<long long>& weights, long long &answer, int index, long long group1, long long group2 ) {
    if (index == weights.size()){
        answer = min(answer, abs(group1-group2));
        return;
    }

    divide_apples(weights, answer, index + 1, group1 + weights[index], group2);

    divide_apples(weights, answer, index + 1, group1, group2 + weights[index]);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <long long> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    long long ans = 1e18;
    int start = 0;
    divide_apples(weights, ans, start, 0, 0);

    cout << ans << "\n";



}