#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int n, m;
vector<int> vis;
vector<vector<int>> al;
vector<vector<int>> cc;
vector<int> component;

vector<int> sol;

int L(int u) { return u; }
int R(int u) { return u + n; };

void dfs_topo(int u) {
	vis[u] = 1;
	for (auto v : al[u]) {
		if (vis[v]) continue;
		dfs_topo(v);
	}
	sol.emplace_back(u);
}

void dfs_component(int u, int num) {
	vis[u] = 1;
	component[u] = num;
	for (auto v : cc[u]) {
		if (vis[v]) continue;
		dfs_component(v, num);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;

	vis.assign(2*n, 0);
	component.assign(2*n, 0);
	al.assign(2*n, vector<int>());
	cc.assign(2*n, vector<int>());

	rep(i, m) {
		int t, u, v;
		cin >> t >> u >> v;
		u--; v--;
		if (t == 1) {
			cc[L(u)].emplace_back(R(v));
			cc[L(v)].emplace_back(R(u));
			cc[R(v)].emplace_back(L(u));
			cc[R(u)].emplace_back(L(v));

			al[L(u)].emplace_back(R(v));
			al[L(v)].emplace_back(R(u));
		} else {
			cc[R(u)].emplace_back(L(v));
			cc[R(v)].emplace_back(L(u));
			cc[L(v)].emplace_back(R(u));
			cc[L(u)].emplace_back(R(v));

			al[R(u)].emplace_back(L(v));
			al[R(v)].emplace_back(L(u));
		}
	}

	// find all connected components
	int num = 5;
	rep(u, 2*n) if (!vis[u]) {
		num++;
		dfs_component(u, num);
	}

	unordered_set<int> OK;
	rep(u, n) {
		if (component[u] == component[u+n]) {
			cout << "NO" << endl;
			return 0;
		}
		OK.insert(min(component[u], component[u+n]));
	}

	vis.assign(2*n, 0);
	rep(u, 2*n) if (OK.count(component[u])) {
		if (!vis[u]) dfs_topo(u);
	}

	if (sol.size() != n) {
		cout << "NO" << endl;
		return 0;
	}

	vector<pair<string,int>> ans(n);
	reverse(sol.begin(), sol.end());
	int val = 0;
	for (auto u : sol) {
		ans[u%n] = {(u<n ?"L":"R"), val++};
	}

	cout << "YES" << endl;
	rep(i, n) cout << ans[i].first << " " << ans[i].second << endl;
}
