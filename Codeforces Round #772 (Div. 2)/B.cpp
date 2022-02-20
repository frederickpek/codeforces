#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int b[n];
	rep(i, n) cin >> b[i];

	int q = 0;
	rep(i, n) {
		if (i==0 || i==n-1) continue;
		if (b[i-1] < b[i] && b[i] > b[i+1]) {
			b[i+1] = b[i];
			if (i < n-2 && b[i+2]>b[i]) b[i+1] = b[i+2];
			q++;
		}
	}

	cout << q << endl;
	rep(i, n) cout << b[i] << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
