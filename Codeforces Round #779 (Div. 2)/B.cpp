#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define rep(i, n) for (int i = 0; i < n; i++)

const int mod = 998244353;

int fact(int n) {
	int ret = 1;
	while (n > 1) {
		ret = (ret * n) % mod;
		n--;
	}
	return ret;
}

void solve() {
	int n;
	cin >> n;
	if (n % 2) {
		cout << 0 << endl;
		return;
	}

	n >>= 1;

	cout << (fact(n) * fact(n)) % 998244353 << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
