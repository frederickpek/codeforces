#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

vector<int> A;
vector<int> deg;
vector<vector<int>> al;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	al.resize(n);
	deg.assign(n, 0);
	A.assign(n, -1);
	rep(i, n) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		al[u].emplace_back(v);
		al[v].emplace_back(u);
		deg[u]++;
		deg[v]++;
	}

	queue<int> q;
	rep(u, n) if (deg[u]==1) q.push(u);

	while (q.size()) {
		int u = q.top(); q.pop();
		A[u] = 1;
		deg[u]--;
		for (int v : al[u]) {
			deg[v]--;
			if (deg[v]!=1) continue;
			
		}
	}
}
