#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, k;
	cin >> n >> k;

	vector<pair<int,int>> v(n);	
	rep(i, n) cin >> v[i].first;
	rep(i, n) cin >> v[i].second;
	sort(v.begin(), v.end());

	for (auto [a, b] : v) {
		if (k < a) break;
		k += b;
	}

	cout << k << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
