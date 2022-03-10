#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> ii;
typedef vector<int> vi;

vi match, vis;                                   // global variables
vector<vi> AL;

int l, r, Left, Right;

int Aug(int L) {
	if (L<l || L>r) return 0;
	if (vis[L]) return 0;                          // L visited, return 0
	vis[L] = 1;
	for (auto &R : AL[L]) {
		if (R < Left || R > Right) continue;
		if ((match[R] == -1) || Aug(match[R])) {
			match[R] = L;                              // flip status
			return 1;                                  // found 1 matching
		}
	}
	return 0;                                      // no matching
}

void solve() {
	int n;
	cin >> n;
	AL.assign(2*n, vector<int>());
	rep(i, 2*n) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		AL[u].emplace_back(v);
		AL[v].emplace_back(u);
	}

	int ans = 0;
	for (l = 0; l < n; l++) for (r = l; r < n; r++) {
		for (Left = n; Left < 2*n; Left++) for (Right = Left; Right < n*2; Right++) {
			unordered_set<int> freeV;
			for (int L = l; L <= r; ++L)
				freeV.insert(L);
			match.assign(2*n, -1);
			int MCBM = 0;
			for (int L = l; L <= r; ++L) {
				vi candidates;
				for (auto &R : AL[L]) {
				if (R < Left || R > Right) continue;

				  if (match[R] == -1)
					candidates.push_back(R);
				}
				if ((int)candidates.size() > 0) {
				  ++MCBM;
				  freeV.erase(L);
				  int a = rand()%(int)candidates.size();
				  match[candidates[a]] = L;
				}
			}
			for (auto &f : freeV) {
				vis.assign(n, 0);
				MCBM += Aug(f);
			}
			ans += MCBM;
		}
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;
	rep(i, t) solve();
}
