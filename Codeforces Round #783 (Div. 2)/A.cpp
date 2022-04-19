#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, m;
	cin >> n >> m;
	if (n > m) swap(n, m);

	if (n == 1) {
		if (m == 1) cout << 0 << endl;
		else if (m == 2) cout << 1 << endl;
		else cout << -1 << endl;
		return;
	}

	int diff = m - n;
	int val = 0;
	if (diff % 2 == 0) {
		val = diff*2;
	} else val = (diff-1)*2+1;

	cout << (n-1) * 2 + val << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
