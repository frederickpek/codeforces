#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<pair<ll,int>> a, b;
	rep(i, n) {
		ll val;
		cin >> val;
		a.emplace_back(val, i);
	}
	rep(i, n) {
		ll val;
		cin >> val;
		b.emplace_back(val, i);
	}

	ll a1 = a[0].first;
	ll a2 = a[n-1].first;
	ll b1 = b[0].first;
	ll b2 = b[n-1].first;

	a[0].second = -1;
	a[n-1].second = -2;
	b[0].second = -1;
	b[n-1].second = -2;

	// sort(a.begin(), a.end());
	// sort(b.begin(), b.end());

	ll ans = 0;

	// match a1
	ll lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans += lowest;

	// match a2
	lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans += lowest;

	// match b1
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans += lowest;

	// match b2
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans += lowest;

	ans = min({llabs(a1 - b1) + llabs(a2 - b2), llabs(a1 - b2) + llabs(a2 - b1), ans});

	// a1-b1
	ll ans2 = llabs(a1 - b1);
	// match a2
	lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	// match b2
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	ans = min(ans, ans2);

	//a1-b2
	ans2 = llabs(a1 - b2);
	// match a2
	lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	// match b1
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	ans = min(ans, ans2);

	// a2-b1
	ans2 = llabs(a2 - b1);
	// match a1
	lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	// match b2
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b2);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	ans = min(ans, ans2);

	// a2-b2
	ans2 = llabs(a2 - b2);
	// match a1
	lowest = 1e18;
	for (auto [val, i] : b) {
		ll curr = llabs(val - a1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	// match b1
	lowest = 1e18;
	for (auto [val, i] : a) {
		ll curr = llabs(val - b1);
		if (curr < lowest) {
			lowest = curr;
		}
	}
	ans2 += lowest;
	ans = min(ans, ans2);

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
