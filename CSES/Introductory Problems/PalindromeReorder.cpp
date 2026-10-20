// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int count[26] = {};

    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 65]++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i ++) {
        if (count[i] % 2 != 0) {
            odd++;
        }
    }
    if (odd > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "";
    string middle = "";
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            for (int j = 0; j < count[i]; j++){
                middle += 'A' + i;
            }
            continue;
        }

        for (int j = 0; j < count[i] / 2; j++) {
            left += 'A' + i;
        }

    } 

    string right = "";
    for (int i = left.size() - 1; i >= 0; i--) {
        right += left[i];
    }
    string output = left + middle + right;
    cout << output << "\n";

}