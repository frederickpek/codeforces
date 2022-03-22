#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int x, y;
	cin >> x >> y;

	int d = x*x + y*y;

	if (d == 0) {
		cout << 0 << endl;
		return;
	}

	if (x == 0 || y == 0) {
		cout << 1 << endl;
		return;
	}

	int v = (int)sqrt(d);

	cout << (v*v == d ? 1 : 2) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
