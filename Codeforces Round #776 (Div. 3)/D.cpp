#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), pos(n);
	rep(i, n) {
		cin >> a[i];
		a[i]--;
		pos[a[i]] = i;
	}

	int sum = 0;
	vector<int> sol;
	for (int d = n-1; d >= 0; d--) {
		int shift = (pos[d]+1)%(d+1);
		for (int k = d-1; k >= 0; k--) pos[k] = (pos[k]+(d+1)-shift)%(d+1);
		sol.emplace_back(shift);
	}

	reverse(sol.begin(), sol.end());
	for (int v : sol) cout << v << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
