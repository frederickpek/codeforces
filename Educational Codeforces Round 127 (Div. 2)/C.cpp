#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	rep(i, n) cin >> a[i];
	sort(a, a+n);

	int tot_cost = 0;
	int i = 0;
	while (1) {
		if (i == n) break;
		if (tot_cost + a[i] > x) break;
		tot_cost += a[i];
		i++;
	}
	i--;

	int ans = 0;
	int round = 0;
	int first = 1;
	while (i >= 0) {
		int num = i + 1;
		int rem = (x - tot_cost) / num;
		round += rem;
		if (x - tot_cost < 0) break;
		tot_cost += num * rem;
		tot_cost -= a[i] + round;
		i--;
		ans += (rem + first) * num;
		// cout << "ans: " << ans << endl;
		// cout << "tc: " << tot_cost << endl;
		// cout << "r: " << (rem + 1) * num << endl;
		first = 0;
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
