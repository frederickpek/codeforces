#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, k;
	cin >> n >> k;

	if (k == 1) {
		cout << "YES" << endl;
		rep(i, n) cout << i+1 << endl;
		return;
	}

	if (n%2==0) {
		cout << "YES" << endl;
		rep(i, n) {
			rep(j, k) cout << (i+1) + (n*j) << ' ';
			cout << endl;
		}
		return;
	}

	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
