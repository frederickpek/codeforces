#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	multiset<int> S;
	rep(i, n) {
		int val;
		cin >> val;
		S.insert(val);
	}

	int largest = -1;
	for (auto val : S) largest = max(largest, val);

	multiset<int> S2;
	for (auto val : S) if (largest - val) S2.insert(largest - val);

	S = S2;

	int ans = 0;
	while (!S.empty()) {
		// fill shallowest one with 1
		auto val = *S.begin();
		S.erase(val);
		val--;
		if (val > 0) S.insert(val);
		ans++;
		if (S.empty()) break;
		// fill deepest one with 2
		
		ans++;
		val = *--S.end();
		if (val == 1) continue;
		S.erase(val);
		val-=2;
		if (val > 0) S.insert(val);
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
