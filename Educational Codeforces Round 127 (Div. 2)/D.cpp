#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	
	int ub = -1;
	int lb = 1e9;

	set<pair<int,int>> S;
	rep(i, n) {
		cin >> a[i];
		ub = max(a[i], ub);
		lb = min(lb, a[i]);
		S.insert({a[i], i});
	}

	int ans = 0;
	if (lb > x) ans += 
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
