#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

const int delta = 1e5;

int longestArithSeqLength(vector<int>& nums) {
	int n = nums.size(),res = 2,diff;
	vector<vector<int>>dp(n,vector<int>(2*delta+1,0));
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			diff = nums[j]-nums[i]+delta;
			dp[j][diff] = max(2,dp[i][diff]+1);
			res = max(res,dp[j][diff]);
		}
	}
	return res;
}

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	rep(i, n) cin >> nums[i];
	cout << n - longestArithSeqLength(nums) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	solve();
}
