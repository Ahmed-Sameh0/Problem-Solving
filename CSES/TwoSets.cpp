// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << "\n";
        return 0;
    }

    vector<long long> arr;
    vector<long long> firstSet;
    vector<long long> secondSet;

    for (int i = 0; i < n; i ++) {
        arr.push_back(i+1);
    }

    long long target = sum / 2;
    long long firstSetSum = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (target > firstSetSum && (firstSetSum + arr[i]) <= target) {
            firstSetSum += arr[i];
            firstSet.push_back(arr[i]);
            arr.erase(arr.begin() + i);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        secondSet.push_back(arr[i]);
    }

    cout << "YES" << "\n";
    cout << firstSet.size() << "\n";
    for (int i = 0; i < firstSet.size(); i++) {
        cout << firstSet[i] << " ";
    }
    cout << "\n";

    cout << secondSet.size() << "\n";
    for (int i = 0; i < secondSet.size(); i++) {
        cout << secondSet[i] << " ";
    }
    cout << "\n";
}