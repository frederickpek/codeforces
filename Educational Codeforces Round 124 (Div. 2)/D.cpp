#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	vector<pair<int,int>> p;
	set<int> X_, Y_, X, Y;
	rep(i, n) {
		int x, y;
		cin >> x >> y;
		p.emplace_back(x, y);
		X_.insert(x);
		Y_.insert(y);
	}

	for (auto x : X_) {
		if (!X_.count(x+1)) X.insert(x+1);
		if (!X_.count(x-1)) X.insert(x-1);
	}

	for (auto y : Y_) {
		if (!Y_.count(y+1)) X.insert(y+1);
		if (!Y_.count(y-1)) X.insert(y-1);
	}

	for (auto [x, y] : p) {
		
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
