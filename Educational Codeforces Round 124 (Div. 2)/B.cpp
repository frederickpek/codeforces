#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	if (n > 19) {
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
	int val = 1;
	rep(i, n) {
		cout << val << ' ';
		val *= 3;
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
