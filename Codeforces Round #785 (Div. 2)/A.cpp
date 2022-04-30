#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	int n = s.length();

	if (n%2==0) {
		int ans = 0;
		for (auto c : s) ans += c - 'a' + 1;
		cout << "Alice " << ans << endl;
		return;
	}

	if (n == 1) {
		cout << "Bob " << s[0] - 'a' + 1 << endl;
		return;
	}

	if (s[0] < s[n-1]) {
		int b = s[0] - 'a' + 1;
		int a = 0;
		for (int i = 1; i < n; i++) a += s[i] - 'a' + 1;
		cout << "Alice " << a - b << endl;
		return;
	}

	int b = s[n-1] - 'a' + 1;
	int a = 0;
	for (int i = 0; i < n-1; i++) a += s[i] - 'a' + 1;
	cout << "Alice " << a - b << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
