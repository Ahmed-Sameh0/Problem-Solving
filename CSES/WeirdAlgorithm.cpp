// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;
    cout << x << " ";
    while (x != 1){
        if (x % 2 == 0){
            x /= 2;
        }
        else {
            x = (x * 3) + 1;
        }
        cout << x << " ";
    }
    
}