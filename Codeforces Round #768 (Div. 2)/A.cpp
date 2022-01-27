#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	int A = -1, B = -1;

	rep(i, n) {
		if (a[i] > b[i]) swap(a[i], b[i]);
		A = max(A, a[i]);
		B = max(B, b[i]);
	}

	cout << A*B << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
