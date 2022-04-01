#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int ans = 1;
	rep(i, n) {
		int val;
		cin >> val;
		ans += val;
	}
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	solve();
}
