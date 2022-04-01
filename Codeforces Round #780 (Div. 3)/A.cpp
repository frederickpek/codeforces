#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int a, b;
	cin >> a >> b;
	if (a == 0) {
		cout << 1 << endl;
		return;
	}
	cout << 2*b + a + 1 << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
