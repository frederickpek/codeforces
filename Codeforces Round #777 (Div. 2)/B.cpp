#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

const int N = 100;
int g[N][N];

int n, m;
vector<vector<int>> vis;

int oob(int i, int j) {
	return i < 0 || i > n-1 || j < 0 || j > m-1;
}

int d4i[4] = {0, 0, -1, 1};
int d4j[4] = {-1, 1, 0, 0};

vector<vector<pair<int,int>>> v;

void dfs(int i, int j, int C) {
	vis[i][j] = 1;
	v[C].emplace_back(i, j);
	rep(k, 4) {
		int di = i + d4i[k];
		int dj = j + d4j[k];
		if (oob(di, dj) || vis[di][dj] || !g[di][dj]) continue;
		dfs(di, dj, C);
	}
}

void solve() {
	cin >> n >> m;
	rep(i, n) rep(j, m) {
		char c;
		cin >> c;
		g[i][j] = c-'0';
	}

	v.assign(n*m, vector<pair<int,int>>());
	vis.assign(n, vector<int>(m, 0));
	int C = 0;
	rep(i, n) rep(j, m) if (g[i][j] && !vis[i][j]) {
		dfs(i, j, C);
		C++;
	}

	rep(k, C) {
		int imin = 1000, imax = -1, jmin = 1000, jmax = -1;
		for (auto [i, j] : v[k]) {
			imin = min(imin, i);
			jmin = min(jmin, j);
			imax = max(imax, i);
			jmax = max(jmax, j);
		}
		if ((imax-imin+1)*(jmax-jmin+1) == (int)v[k].size()) continue;
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
