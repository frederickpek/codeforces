#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

map<string,int> M;

void solve() {
	string s;
	cin >> s;
	cout << M[s] << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	vector<string> v;
	rep(i, 26) rep(j, 26) if (i != j) {
		string s = "";
		s.push_back('a'+i);
		s.push_back('a'+j);
		v.emplace_back(s);
	}
	sort(v.begin(), v.end());
	rep(i, v.size()) M[v[i]] = i+1;

	int t;
	cin >> t;
	rep(i, t) solve();
}
