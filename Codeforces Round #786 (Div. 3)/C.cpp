#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s, t;
	cin >> s >> t;
	if (t == "a") {
		cout << 1 << endl;
		return;
	}

	for (char c : t) if (c == 'a') {
		cout << -1 << endl;
		return;
	}

	long long n = s.length();
	cout << (1LL<<(n)) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
