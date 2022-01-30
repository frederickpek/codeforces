#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int a, b;
	cin >> a >> b;

	int ans = 1e9;

	if ((a|b) == b) ans = 1;
	if (a|b > b) ans = min(ans, 1 + (a|b)-b);
	ans = min(ans, b - a);

	// 2nd then 3rd case
	int i = 0;
	int sum = 0;
	while (1) {
		if ((1<<i) > a) break;
		if ((1<<i)&a && !((1<<i)&b)) {
			sum += (1<<i);
			// cout << "i: " << i << endl;
		}
		i++;
	}

	ans = min(ans, sum + 1);

	cout << ans << endl;
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
