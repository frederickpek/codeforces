#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) {
		char c;
		cin >> c;
		a[i] = c - '0';
	}
	
	int ans = 0;
	rep(i, n) {
		if (i <= n-2) {
			if (a[i]==0 && a[i+1]==0) ans += 2;
		}
		if (i <= n-3) {
			if (a[i] == 0 && a[i+1] == 1 && a[i+2] == 0) ans += 1;
		}
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
