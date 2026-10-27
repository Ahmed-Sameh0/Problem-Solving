// CSES maths
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long mod = 1000000007;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        long long answer = 1;
        a %= mod;

        while (b > 0) {
            if (b & 1) {
                answer = answer * a % mod;
            }
            a = a * a % mod;
            b >>= 1;
        }

        cout << answer << "\n";
    }
}