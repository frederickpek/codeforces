#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i, n) for (int i = 0; i < n; i++)

int n;
bool oob(int u) { return u < 0 || u > n-1; }

vector<int> p, lb, ub, S;

int parent(int u) {
	if (p[u] == -1) return u;
	p[u] = parent(p[u]);
	return p[u];
}

void join(int u, int v) {
	u = parent(u);
	v = parent(v);
	if (u == v) return;
	p[u] = v;
	lb[v] = min(lb[v], lb[u]);
	ub[v] = max(ub[v], ub[u]);
	S[v] += S[u];
}

void solve() {
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];

	vector<int> eaten(n, 0);
	p.assign(n, -1);
	lb.assign(n, 0);
	ub.assign(n, 0);
	S.assign(n, 0);
	rep(i, n) {
		lb[i] = ub[i] = i;
		S[i] = a[i];
	}

	rep(u, n) {
		if (eaten[parent(u)]) continue;
		if (a[u]<0) continue;
		eaten[parent(u)] = 1;

		// keep expanding
		while (1) {
			int v1 = lb[parent(u)] - 1;
			int v2 = ub[parent(u)] + 1;
			int val1 = -llabs(S[parent(u)]);
			int val2 = -llabs(S[parent(u)]);

			if (!oob(v1)) val1 = S[parent(v1)];
			if (!oob(v2)) val2 = S[parent(v2)];

			// if can eat both, eat larger
			if (S[parent(u)] + val1 > 0 && S[parent(u)] + val2 > 0) {
				if (val1 > val2) {
					join(u, v1);
					eaten[parent(v1)] = 1;
				} else {
					join(u, v2);
					eaten[parent(v2)] = 1;
				}
			}

			else if (S[parent(u)] + val1 > 0) {
				join(u, v1);
				eaten[parent(v1)] = 1;
			}

			else if (S[parent(u)] + val2 > 0) {
				join(u, v2);
				eaten[parent(v2)] = 1;
			}

			else break;
		}
	}

	int ans = 0;
	rep(u, n) {
		if (eaten[parent(u)]) ans++;
		else if (a[u] < 0) ans--;
	}

	cout << ans << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
