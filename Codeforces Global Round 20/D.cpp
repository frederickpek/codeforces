#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n + 5, -1), b(n + 5, -1);
	rep(i, n) cin >> a[i+1];
	rep(i, n) cin >> b[i+1];

	multiset<int> S;
	b.front() = -1e9;

	bool found = 1;
	int prev = 1e9, p1 = n, p2 = n;
	while (p1 or p2){
		if (a[p1] == b[p2]) {
			prev = a[p1];
			--p1;
			--p2;
			continue;
	  	}
		if (prev == b[p2]) {
			S.insert(b[p2--]);
			continue;
		}
		auto itr = S.find(a[p1]);
		if (itr != S.end()) {
			S.erase(itr);
			p1--;
		} else {
			found = 0;
			break;
		}
	}

	cout << (found ? "YES" : "NO") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
