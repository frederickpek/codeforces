#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	r--; c--;

	char g[n][m];
	bool has_black = false;
	rep(i, n) rep(j, m) {
		cin >> g[i][j];
		has_black |= g[i][j] == 'B';
	}

	if (!has_black) {
		cout << -1 << endl;
		return;
	}

	if (g[r][c] == 'B') {
		cout << 0 << endl;
		return;
	}

	has_black = false;
	rep(i, n) has_black |= g[i][c] == 'B';
	rep(j, m) has_black |= g[r][j] == 'B';

	cout << (has_black ? 1 : 2) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
