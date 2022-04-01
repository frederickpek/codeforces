#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int g[n][n];
	int tot1s = 0;
	rep(i, n) rep(j, n) {
		char c;
		cin >> c;
		g[i][j] = c - '0';
		tot1s += (g[i][j] == 1);
	}

	int best = n * n + 5;
	rep(i, n) {
		int num1s = 0;
		rep(j, n) num1s += g[(i+j)%n][j];
		best = min(best, (n - num1s) + (tot1s - num1s));
	}

	cout << best << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
