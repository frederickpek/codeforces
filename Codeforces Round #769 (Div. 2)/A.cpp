#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

vector<string> viable = {"1", "0", "01", "10"};

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	for (auto t : viable) {
		if (s != t) continue;
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
