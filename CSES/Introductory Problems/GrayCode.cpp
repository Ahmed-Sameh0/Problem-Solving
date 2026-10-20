// https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> g = {"0", "1"};
    for (int k = 2; k <= n; k++) {
        vector<string> next;
        next.reserve(g.size() * 2);
        for (size_t i = 0; i < g.size(); i++)
            next.push_back("0" + g[i]);
        for (size_t i = g.size(); i-- > 0;)
            next.push_back("1" + g[i]);
        g = move(next);
    }
    string out;
    for (auto &s : g) out += s + "\n";
    fputs(out.c_str(), stdout);
}