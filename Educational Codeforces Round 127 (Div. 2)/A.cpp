#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	s = "." + s + ".";
	rep(i, n) {
		int j = i+1;
		if (s[j-1] != s[j] && s[j] != s[j+1]) {
			cout << "NO" << endl;
			return;
		}
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
