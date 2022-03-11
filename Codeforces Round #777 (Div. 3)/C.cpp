#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, m;
	cin >> n >> m;
	int g[n][m];
	rep(i, n) rep(j, m) {
		char c;
		cin >> c;
		g[i][j] = c-'0';
	}
	if (g[0][0]) {
		cout << -1 << endl;
		return;
	}

	int dh[2] = {0, -1};
	int dv[2] = {-1, 0};

	vector<tuple<int,int,int,int>> sol;
	for (int i = n - 1; i >= 0; i--) for (int j = m - 1; j >= 0; j--) {
		if (!g[i][j]) continue;
		int di = i + (j ? dh[0] : dv[0]); 
		int dj = j + (j ? dh[1] : dv[1]);
		sol.emplace_back(di, dj, i, j);
	}

	cout << (int)sol.size() << endl;
	for (auto &[a, b, c, d] : sol) {
		cout << a+1 << ' ' << b+1 << ' ' << c+1 << ' ' << d+1 << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
