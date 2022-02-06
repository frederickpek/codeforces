#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

bool is_palindrome(string &s) {
	string t = s;
	reverse(t.begin(), t.end());
	return t == s;
}

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	if (k == 0) {
		cout << 1 << endl;
		return;
	}

	cout << (is_palindrome(s) ? 1 : 2) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
