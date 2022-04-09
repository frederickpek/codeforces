#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	int ans = 0;
	rep(i, n-1) {
		int j = i + 1;
		int noswap = llabs(a[i]-a[j]) + llabs(b[i]-b[j]);
		int swap = llabs(a[i]-b[j]) + llabs(b[i]-a[j]);
		ans += min(noswap, swap);
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
