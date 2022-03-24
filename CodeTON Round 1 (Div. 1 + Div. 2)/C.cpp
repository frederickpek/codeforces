#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	bool has1 = 0, has0 = 0, all1s = 1, all0s = 1;
	vector<int> v;
	rep(i, n) {
		int val;
		cin >> val;
		has1 |= val==1;
		has0 |= val==0;
		all1s &= val==1;
		all0s &= val==0;
		v.emplace_back(val);
	}

	if (all1s || all0s) {
		cout << "YES" << endl;
		return;
	}

	if (!has1 && !has0) {
		cout << "YES" << endl;
		return;
	}

	// can bring all to 0, mod largest to smallest
	if (has0 && !has1) {
		cout << "YES" << endl;
		return;
	}

	// check if can bring all to 1
	if (has1 && !has0) {
		// only can if all numbers a larger than 2 and are all not 1 apart
		sort(v.begin(), v.end());
		rep(i, n-1) {
			if (v[i+1] - v[i] == 1) {
				cout << "NO" << endl;
				return;
			}
		}
		cout << "YES" << endl;
		return;
	}

	// got 1 and 0, impossible
	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
