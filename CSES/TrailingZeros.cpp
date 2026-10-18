// https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count_of_5s = 0;

    while (n > 0) {
        count_of_5s += n / 5;
        n = n/5;
    }

    cout << count_of_5s << "\n";

}