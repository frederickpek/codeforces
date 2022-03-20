#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n, sum = 0;
	cin >> n;
	unordered_map<int,int> m;
	rep(i, n) {
		int v;
		cin >> v;
		m[v]++;
		sum += v;
	}

	int num_rem = n;

	priority_queue<int> pq;
	pq.emplace(sum);

	while (num_rem) {
		int val = pq.top(); pq.pop();
		
		if (m.count(val) && m[val]) {
			m[val]--;
			num_rem--;
			continue;
		}

		int a = val/2;
		int b = val - a;

		pq.emplace(a);
		pq.emplace(b);
		
		if (pq.size() > num_rem) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
