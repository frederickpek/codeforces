#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[n-1-i];

	int ans = 0;
	int count = 0;
	rep(i, n) {
		if (!i) continue;
		if (count) {
			a[i] = a[i-1];
			count--;
			continue;
		}
		if (a[i] == a[i-1]) continue;
		a[i] = a[i-1];
		count = i-1;
		ans++;
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
