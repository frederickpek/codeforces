#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, B, x, y;
	cin >> n >> B >> x >> y;

	int ans = 0;
	int prev = 0;

	rep(i, n) {
		if (prev + x <= B) {
			prev += x;
			ans += prev;
		} else {
			prev -= y;
			ans += prev;
		}
	}

	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
