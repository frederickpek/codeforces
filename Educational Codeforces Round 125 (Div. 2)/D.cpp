#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, C;
	cin >> n >> C;
	vector<tuple<int,int,int>> v;
	rep(i, n) {
		int c, d, h;
		cin >> c >> d >> h;
		v.emplace_back(c, d, h);
	}
	int m;
	cin >> m;
	vector<pair<int,int>> M;
	rep(i, m) {
		int D, H;
		cin >> D >> H;
		M.emplace_back(D, H);
	}

	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
