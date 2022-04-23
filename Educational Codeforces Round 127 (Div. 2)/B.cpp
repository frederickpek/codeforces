#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];

	int num_gaps = 0;
	int gap_val = -1;
	rep(i, n-1) {
		int gap = a[i+1]-a[i];
		if (gap>1) {
			num_gaps++;
			gap_val = max(gap_val, gap);
		}
	}

	if ((num_gaps==0) || (num_gaps == 1 && gap_val <= 3)) {
		cout << "YES" << endl;
	} else if (num_gaps == 2 && gap_val == 2) {
		cout << "YES" << endl;
	} else cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
