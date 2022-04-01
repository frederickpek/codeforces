#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	if (n == 1 && v[0] > 1) {
		cout << "NO" << endl;
		return;
	} else if (n == 1) {
		cout << "YES" << endl;
		return;
	}

	sort(v.rbegin(), v.rend());
	if (v[0] - v[1] >= 2) {
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
