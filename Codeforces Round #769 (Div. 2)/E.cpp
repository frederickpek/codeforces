#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

const int inf = 1e9 + 7;
vector<vector<int>> al, D;

void solve() {
	int n;
	cin >> n;

	al.assign(n, vector<int>());
	D.assign(n, vector<int>(n, inf));

	rep(i, n-1) {
		int u,  v;
		cin >> u >> v;
		u--; v--;
		al[u].emplace_back(v);
		al[v].emplace_back(u);
	}

	rep(u, n) for (auto v : al[u]) D[u][v] = 1;
	rep(u, n) D[u][u] = 0;

	rep(k, n) rep(i, n) rep(j, n) {
		if (D[i][j] > D[i][k] + D[k][j])
			D[i][j] = D[i][k] + D[k][j];
	}

	rep(w, n) {
		int ans = inf;
		rep(u, n) {
			int loc = -1;
			rep(v, n) loc = max(loc, min(D[v][u] + (w+1), D[v][0]));
			ans = min(ans, loc);
		}
		cout << ans << ' ';
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
