#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

const int MOD = 32768;

int memo[32768+10][50];

int dp(int val, int depth) {
	if (depth > 49) return 9999999;
	if (val == 0) return 0;
	int &ans = memo[val][depth];
	if (ans != -1) return ans;

	ans = min(dp((val+1)%MOD, depth+1), dp((val*2)%MOD, depth+1)) + 1;

	return ans;
}

void solve() {
	int val;
	cin >> val;
	cout << dp(val, 0) << ' ';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	memset(memo, -1, sizeof memo);

	int t;
	cin >> t;
	rep(i, t) solve();
}
