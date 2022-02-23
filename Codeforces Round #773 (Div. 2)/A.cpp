#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	vector<pair<int,int>> v;
	rep(i, 3) {
		int x, y;
		cin >> x >> y;
		v.emplace_back(y, x);
	}

	sort(v.rbegin(), v.rend());

	if (v[0].first != v[1].first) {
		cout << 0 << endl;
		return;
	}

	cout << v[0].second - v[1].second << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
