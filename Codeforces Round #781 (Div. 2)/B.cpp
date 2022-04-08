#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	map<int,int> freq;
	rep(i, n) {
		int val;
		cin >> val;
		freq[val]++;
	}

	int mx = -1;
	for (auto [val, f] : freq) {
		mx = max(mx, f);
	}

	int ans = 0;
	int rem = n - mx;
	int num = mx;
	while (rem > 0) {
		ans++; // clone;
		if (rem <= num) {
			ans += rem;
			rem = 0;
		} else {
			rem -= num;
			ans += num;
		}
		num *= 2;
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
