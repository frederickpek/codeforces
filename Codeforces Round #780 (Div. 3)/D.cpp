#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> zeros = {-1};
	rep(i, n) {
		cin >> a[i];
		if (a[i] != 0) continue;
		zeros.emplace_back(i);
	}

	int ans = 1;			   // {2s, 1s}
	tuple<int,int,int,int> best = {2, 0, 0, 0};
	pair<int,int> sol = {0, n};

	zeros.emplace_back(n);
	int numZeros = zeros.size();
	rep(z, numZeros) {
		int i = numZeros[z];
		int j = numZeros[z+1];
		// search from i to j exclusive;
		for (int k = i+1; k < j; k++) {



		}
	}

	cout << sol.first << " " << sol.second << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
