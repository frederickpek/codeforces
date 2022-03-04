#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	sort(a, a+n);

	int blue = 1, red = n-1;
	int count_blue = 2;
	int count_red = 1;
	int sum_red = a[n-1];
	int sum_blue = a[0] + a[1];

	while (1) {
		if (sum_red > sum_blue && count_red < count_blue) {
			cout << "YES" << endl;
			return;
		}

		if (sum_red <= sum_blue) {
			red--; blue++;
			if (blue >= red) {
				break;
			}
			sum_red += a[red];
			sum_blue += a[blue];
			count_red++;
			count_blue++;
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
