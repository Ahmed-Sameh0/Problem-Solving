// https://codeforces.com/problemset/problem/1612/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        long long k, x;
        cin >> k >> x;

        long long low = 1, high = 2*k-1;
        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long messages; 

            if (mid <= k){
                messages = (mid * (mid + 1))/2;
            } 
            else{
                long long r = mid - k;
                messages = k * (k + 1) / 2 + r * k - r * (r + 1) / 2;
            }

            if (messages >= x)
                high = mid;
            else
                low = mid + 1;
        }
        cout << low<< "\n";
    }        

}