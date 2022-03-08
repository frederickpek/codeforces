#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s; string c;
	cin >> s >> c;

	int pos = -1;
	while (1) {
		pos = s.find(c, pos+1);
		if (pos == -1) break;
		if (pos%2 == 0) {
			cout << "YES" << endl;
			return;
		}
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
