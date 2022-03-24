#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, k;
	cin >> n >> k;
	unordered_set<int> S;
	rep(i, n) {
		int x;
		cin >> x;
		S.insert(x);
	}

	for (auto val : S) {
		if (S.count(k + val)) {
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
