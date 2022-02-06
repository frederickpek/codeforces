#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

int f(int x) {
	return x & ((1<<3)-1);
}

void solve() {
	int n, x, y;
	cin >> n >> x >> y;
	int a[n];
	rep(i, n) cin >> a[i];

	int A = f(x), B = f(x + 3);
	unordered_set<int> Sa = {A}, Sb = {B};

	rep(i, n) {
		unordered_set<int> Ta, Tb;
		for (auto val : Sa) {
			Ta.insert(f(val + a[i]));
			Ta.insert(f(val ^ a[i]));
		}

		for (auto val : Sb) {
			Tb.insert(f(val + a[i]));
			Tb.insert(f(val ^ a[i]));
		}

		Sa = Ta;
		Sb = Tb;
	}

	for (auto val : Sa) {
		if (f(val) == f(y)) {
			cout << "Alice" << endl;
			return;
		}
	}

	for (auto val : Sb) {
		if (f(val) == f(y)) {
			cout << "Bob" << endl;
			return;
		}
	}

	cout << "error" << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
