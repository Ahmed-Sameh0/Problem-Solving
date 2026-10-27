// https://codeforces.com/problemset/problem/1385/D
#include <bits/stdc++.h>
using namespace std;

int calc(const string &s, char c) {
	if (s.size() == 1) {
		return s[0] != c;
	}
	int mid = s.size() / 2;
	int leftCount = calc(string(s.begin(), s.begin() + mid), c + 1);
	leftCount += s.size() / 2 - count(s.begin() + mid, s.end(), c);
	int rightCount = calc(string(s.begin() + mid, s.end()), c + 1);
	rightCount += s.size() / 2 - count(s.begin(), s.begin() + mid, c);
	return min(leftCount, rightCount);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t;
	cin >> t;
    for (int i = 0; i < t; i++) {
		int n;
		string s;
		cin >> n >> s;
		cout << calc(s, 'a') << endl;
	}
	
}

