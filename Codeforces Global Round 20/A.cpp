#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	int num_cuts = 0;
	rep(i, n) num_cuts += a[i] - 1;
	cout << (num_cuts%2 ? "errorgorn" : "maomao90") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
