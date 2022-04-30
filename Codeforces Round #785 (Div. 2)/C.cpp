#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

const int MOD = 1e9 + 7;
vector<int> P;
vector<vector<int>> table;

void solve() {
	int n;
	cin >> n;
	cout << table[n][P.size() - 1] << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N = 4e4;

	for (int val = 1; val <= N; val++) {
		if (val%10==0) continue;
		string S = to_string(val);
		string T = S;
		reverse(T.begin(), T.end());
		if (S == T) P.emplace_back(val);
	}

	int i, j, x, y;
	int m = P.size();
	int n = N;
	// int table[n + 1][m];
	table.assign(n+1, vector<int>(m));
	for (i = 0; i < m; i++)
		table[0][i] = 1;
 
	for (i = 1; i < n + 1; i++) {
		for (j = 0; j < m; j++) {
			x = (i - P[j] >= 0) ? table[i - P[j]][j] : 0;
			y = (j >= 1) ? table[i][j - 1] : 0;
			table[i][j] = (x + y) % MOD;
		}
	}

	int t;
	cin >> t;
	rep(i, t) solve();
}
