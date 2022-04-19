#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	rep(i, n) a[i] *= 2;

	// try to make a[k] = 0;
	int ans = 1e18;
	rep(k, n) {
		int sum = 0;
		int prev = -1;
		for (int i = k-1; i >= 0; i--) {
			int target = prev + 1;
			int num = (target / a[i]) + 1;
			prev = a[i] * num;
			sum += num;
		}

		prev = -1;
		for (int i = k+1; i < n; i++) {
			int target = prev + 1;
			int num = (target / a[i]) + 1;
			prev = a[i] * num;
			sum += num;
		}

		ans = min(ans, sum);
	}

	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	solve();
}
