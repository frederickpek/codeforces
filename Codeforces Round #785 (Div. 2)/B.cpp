#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	int idx = n;
	map<int,int> m;
	rep(i, n) {
		if (m[s[i]]) {
			idx = i;
			break;
		}
		m[s[i]]++;
	}

	for (int i = idx; i < n; i++) {
		if (s[i] == s[i%idx]) continue;
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
