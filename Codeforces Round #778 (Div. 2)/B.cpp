#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	unordered_map<char,int> m;
	for (char c : s) m[c]++;

	int j = 0;
	rep(i, n) {
		j = i;
		if (m[s[i]] == 1) break;
		m[s[i]]--;
	}

	for (int i = j; i < n; i++) cout << s[i];
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
