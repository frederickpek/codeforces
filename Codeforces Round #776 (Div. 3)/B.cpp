#include <bits/stdc++.h>
using namespace std;
 
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int l, r, a;
	cin >> l >> r >> a;
	int x = r % a;

	int val;
	if (r - l + 1 >= a) {
		if (x != a - 1) val = r - (x + 1);
		else val = r;
		cout << val/a + val%a << end;
		return;
	}

	if (x != a - 1) {
		int candidate = r - (x + 1);
		r = (candidate >= l && candidate > x) ? candidate : r;
	}

	cout << r/a + r%a << end;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int t;
	cin >> t;
	rep(i, t) solve();
}
