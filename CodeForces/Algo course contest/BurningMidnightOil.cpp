// https://codeforces.com/problemset/problem/165/B
#include <bits/stdc++.h>
using namespace std;

long long total(long long v, long long k) {
    long long s = 0;
    while (v > 0) {
        s += v;
        v /= k;
    }
    return s;
}

int main() {
    long long n, k;
    cin >> n >> k;

    long long low = 1, high = n;
    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (total(mid, k) >= n)
            high = mid;
        else
            low = mid + 1;
    }

    cout << low << endl;
    return 0;
}