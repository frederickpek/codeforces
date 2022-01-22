#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> ans;
	vector<pair<int,int>> ij = {{0, 0}, {n-1, 0}, {0, m-1}, {n-1, m-1}};

	rep(i, n) rep(j, m) {
		int val = 0;
		for (auto [di, dj] : ij) {
			val = max(val, abs(i-di) + abs(j-dj));
		}
		ans.emplace_back(val);
	}

	sort(ans.begin(), ans.end());
	for (auto i : ans) cout << i << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
