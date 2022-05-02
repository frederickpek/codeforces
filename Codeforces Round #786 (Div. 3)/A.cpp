#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int x, y;
	cin >> x >> y;
	if (y % x) {
		cout << 0 << ' ' << 0 << endl;
		return;
	}

	cout << 1 << ' ' << y/x << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
