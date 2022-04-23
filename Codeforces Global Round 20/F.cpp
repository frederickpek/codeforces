#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int mx = -1;
	rep(i, n) mx = max(mx, a[i]);

	vector<pair<int,int>> p;
	rep(i, n) p.emplace_back(a[i], i);

	sort(p.begin(), p.end());

	vector<pair<int,int>> b;
	rep(i, n-mx) b.emplace_back(p[i+mx].first, p[i+mx].second);
	rep(i, mx) b.emplace_back(p[i].first, p[i].second);

	vector<int> sol(n);
	rep(i, n) {
		sol[p[i].second] = b[i].first;
	}

	rep(i, n) cout << sol[i] << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
