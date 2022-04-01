#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	string s;
	cin >> s;
	set<char> C;
	int n = s.length();
	int ans = 0;
	int size = 0;
	rep(i, n) {
		char &c = s[i];
		if (!C.count(c)) {
			C.insert(c);
			size++;
			continue;
		}
		C.clear();
		ans += size-1;
		size = 0;
	}
	ans += size;
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
