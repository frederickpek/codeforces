#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<pair<int,int>> a;
	rep(i, n) {
		int x;
		cin >> x;
		a.emplace_back(x, i);
	}
	sort(a.begin(), a.end());
	cout << a[0].second+1 << " " << a[n-1].second+1 << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
