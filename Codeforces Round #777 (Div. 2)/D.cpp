#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int x, d;
	cin >> x >> d;
	if (d*d >= x || x%(d*d)) {
		cout << "NO" << endl;
		return;
	}

	int AB = x/(d*d);

	// if AB has is prime, cannot
	// if AB has 2 prime factors, can only if AB == d
	// if AB has > 2 prime factors and AB%d != 0

}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
