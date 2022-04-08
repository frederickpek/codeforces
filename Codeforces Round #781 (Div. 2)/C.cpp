#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

vector<vector<int>> al;

void solve() {
	int n;
	cin >> n;
	al.assign(n, vector<int>());
	rep(i, n-1) {
		int par;
		cin >> par;
		par--;
		al[par].emplace_back(i);
	}

	vector<int> a;
	for (auto v : al) {
		if (v.empty()) continue;
		a.emplace_back((int)v.size());
	}

	sort(a.rbegin(), a.rend());
	int levels = (int)a.size();
	int ans = levels;

	int i = 0;
	multiset<int> S1;
	for (auto val : a) {
		val -= levels - i;
		i++;
		if (val <= 0) continue;
		S1.insert(val);
	}

	while (1) {
		ans++;
		if (S1.empty()) break;
		multiset<int> S2;
		// spread
		for (auto val : S1) {
			if (val-1 <= 0) continue;
			S2.insert(val-1);
		}
		if (S2.empty()) break; // counts as infecting v1

		// choose 1 to infect
		int largest = *--S2.end();
		S2.erase(--S2.end());
		if (largest-1>0) S2.insert(largest-1);
		S1 = S2;
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
