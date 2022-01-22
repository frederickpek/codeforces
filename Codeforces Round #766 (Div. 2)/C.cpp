#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

vector<int> vis, e;
vector<pair<int,int>> seq;
vector<vector<pair<int,int>>> al;

void dfs(int u, bool two) {
	vis[u] = 1;
	for (auto [idx, v] : al[u]) {
		if (vis[v]) continue;
		dfs(v, !two);
		e[idx] = two ? 2 : 3;
	}
}

void solve() {
	int n;
	cin >> n;
	int indeg[n];
	memset(indeg, 0, sizeof indeg);

	seq.clear();
	e.assign(n-1, -1);
	vis.assign(n, 0);
	al.assign(n, vector<pair<int,int>>());

	rep(i, n-1) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		indeg[u]++;
		indeg[v]++;
		al[u].emplace_back(i, v);
		al[v].emplace_back(i, u);
		seq.emplace_back(u, v);
	}

	int s = -1;
	rep(u, n) {
		if (indeg[u] > 2) {
			cout << -1 << endl;
			return;
		}
		if (indeg[u]==1) s = u;
	}

	dfs(s, 1);
	rep(i, n-1) cout << e[i] << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
