#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int csPlus[n], csMinus[n];
	csPlus[0] += s[0] == '+';
	csMinus[0] += s[0] == '-';
	rep(i, n-1) {
		csPlus[i+1] += csPlus[i] + (s[i+1] == '+');
		csMinus[i+1] += csMinus[i] + (s[i+1] == '-');
	}

	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
