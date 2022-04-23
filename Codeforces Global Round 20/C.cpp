#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	int e = 0;
	rep(i, n-1) e += a[i]==a[i+1];
	if (e <= 1) {
		cout << 0 << endl;
		return;
	}

	int j = -1;
	rep(i, n-1) if (a[i]==a[i+1]) j = i;

	int ans = 0;
	rep(i, n-1) {
		if (a[i] != a[i+1]) continue;
		if (j == i+1) cout << 1 << endl;
		else cout << j - i - 1 << endl;
		return;
	}

	assert(false);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
