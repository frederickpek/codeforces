#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;

	unordered_map<int,int> freq;
	rep(i, n) {
		int a;
		cin >> a;
		freq[a]++;
	}

	vector<pair<int,int>> v;
	for (auto [val, k] : freq) {
		v.emplace_back(k, val);
	}
	int T = v.size();

	rep(i, T) cout << T << ' ';
	int Q = T;
	rep(i, n-Q) cout << ++T << ' ';
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
