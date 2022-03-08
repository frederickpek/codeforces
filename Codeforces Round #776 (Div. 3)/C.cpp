#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, m;
	cin >> n >> m;
	vector<tuple<int,int,int>> points;
	rep(i, m) {
		int x, w;
		cin >> x >> w;
		points.emplace_back(w, x, i);
	}

	sort(points.begin(), points.end());

	int ans = 0;
	vector<pair<int,int>> v;
	rep(i, 2*n) {
		auto &[w, x, idx] = points[i];
		ans += w;
		v.emplace_back(x, idx);
	}

	sort(v.begin(), v.end());

	cout << ans << endl;

	rep(i, n) {
		auto [x1, idx1] = v[i];
		auto [x2, idx2] = v[2*n-1-i];
		cout << idx1+1 << " " << idx2+1 << endl;
	}
	cout << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
