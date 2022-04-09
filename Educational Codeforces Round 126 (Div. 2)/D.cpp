#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, K;
	cin >> n >> K;
	int b[n];
	rep(i, n) cin >> b[i];

	int ans = 0;

	rep(i, n) {
		int k = i+1;
		ans = max(ans, (b[i]/k)+((b[i]%k)>0));
	}

	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	solve();
}
