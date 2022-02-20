#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	rep(i, n) {
		int a;
		cin >> a;
		ans |= a;
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
