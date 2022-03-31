#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int l, r;
	cin >> l >> r;
	int n = r + 1; // d1
	int a[n];
	int XOR = 0;
	rep(i, n) {
		cin >> a[i];
		XOR ^= a[i];
	}

	int x;
	int N = n-1;
	if (N % 4 == 0) x = N;
	else if (N % 4 == 1) x = 1;
	else if (N % 4 == 2) x = N + 1;
	else x = 0;

	if (n % 2) cout << (XOR ^ x) << endl;
	else cout << "not yet" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
