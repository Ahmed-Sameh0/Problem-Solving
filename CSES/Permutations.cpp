// https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 4) {
        cout << "2 4 1 3";
        return 0;
    }
    if (n < 4) {
        cout << "NO SOLUTION" <<"\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i ++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    for (int i = 0; i < n; i ++) {
        if (i % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
}