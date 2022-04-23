#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	
	if (s[0] == 'B' || s[n-1] == 'A') {
		cout << "NO" << endl;
		return;
	}

	int b = 0, a = 0;
	for (char c : s) {
		b += c=='B';
		a += c=='A';
		if (b > a) {
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
