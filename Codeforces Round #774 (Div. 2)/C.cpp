#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
 
set<ll> can;
vector<ll> v;
 
void solve() {
	ll n;
	cin >> n;
 
	int used = 0;
	ll val = 0;
	for (auto item : v) {
		if (val + item > n) continue;
		val += item;
		used++;
	}
 
 	if (val < n) cout << -1 << endl;
	else cout << used << endl;
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	ll val = 1;
	while (val <= 1e12) {
		can.insert(val);
		val <<= 1;
	}
 
	val = 1;
	ll i = 1;
	while (val <= 1e12) {
		can.insert(val);
		i++;
		val *= i;
	}
 
	for (auto item : can) v.emplace_back(item);
	reverse(v.begin(), v.end());
 
	int t;
	cin >> t;
	rep(i, t) solve();
}