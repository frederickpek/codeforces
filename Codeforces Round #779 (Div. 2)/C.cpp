#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int c[n];
	rep(i, n) cin >> c[i];

	int one = -1;
	int N = -1;
	rep(i, n) {
		if (c[i] == 1) {
			if (one == -1) one = i;
			else {
				cout << "NO" << endl;
				return;
			}
		}
		if (c[i] == n) {
			if (N == -1) N = i;
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}

	if (one == -1) {
		cout << "NO" << endl;
		return;
	}

	int sum = 0;
	rep(i, n) {
		int j = (one + i) % n;
		int k = (j + 1) % n;
		sum += c[j] - c[k];
		if (i == 0) {
			if (c[k] != 2 && k != j) {
				cout << "NO" << endl;
				return;
			}
			continue;
		}
	}

	if (N != -1) {
	int k = (N+1)%n;
	if (c[k] != 1 && k != N) {
		cout << "NO" << endl;
		return;
	}
	}

	if (sum == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
