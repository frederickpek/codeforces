#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

vector<tuple<int,int,int>> C = {{0, 1, 2}, {0, 1, 3}, {0, 2, 3}, {1, 2, 3}};

void solve() {
	int n;
	cin >> n;

	vector<int> v;
	rep(i, n) v.emplace_back(i);

	while (v.size() > 2) {
		vector<int> next;
		int n = v.size();
		int i = 0;
		
		while (i < n) {
			vector<pair<int,int>> sol;
			rep(q, 4) {
				auto [j, k, l] = C[q];
				// find the 2 numbers with 4 queries
				cout << "? " << i+j+1 << ' ' << i+k+1 << ' ' << i+l+1 << endl;
				cout.flush();
				int ans;
				cin >> ans;
				if (ans == -1) return;
				sol.emplace_back(ans, q);
			}

			sort(sol.begin(), sol.end());

			int A = sol[0].second;
			int B = sol[1].second;

			unordered_set<int> S;
			auto [a, b, c] = C[A];
			S.insert(a); S.insert(b); S.insert(c);

			vector<int> pos;
			auto [aa, bb, cc] = C[B];
			if (S.count(aa)) pos.emplace_back(aa);
			if (S.count(bb)) pos.emplace_back(bb);
			if (S.count(cc)) pos.emplace_back(cc);

			for (auto val : pos) {
				next.emplace_back(val + i);
			}

			i += 4;

			// 4k
			if (i == n) break;

			// 4k + 1
			if (i == n-1) {
				// add the last extra number
				// add 1 more random unused number
				next.emplace_back(i);
				rep(j, 4) {
					if (j!=pos[0] && j!=pos[1]) {
						next.emplace_back(i+j);
						break;
					}
				}
				break;
			}

			// 4k + 2
			if (i == n-2) {
				// add the last 2
				next.emplace_back(i);
				next.emplace_back(i+1);
				break;
			}

			// 4k + 3
			if (i == n-3) {
				// add the last 3
				next.emplace_back(i);
				next.emplace_back(i+1);
				next.emplace_back(i+2);
				break;
			}
		}

		v = next;
	}

	cout << "! " << v[0] << " " << v[1] << endl;
	cout.flush();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
