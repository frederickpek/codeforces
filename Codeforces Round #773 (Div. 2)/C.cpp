#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n; ll x;
	cin >> n >> x;

	vector<ll> a(n);
	rep(i, n) cin >> a[i];

	unordered_map<ll,int> freq;
	rep(i, n) freq[a[i]]++;

	sort(a.begin(), a.end());

	int ans = n;
	for (auto val : a) {
		int num_val = freq[val];
		if (!num_val) continue;
		rep(i, num_val) {
			if (!freq[val*x]) continue;
			freq[val]--;
			freq[val*x]--;
			ans-=2;
		}
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
