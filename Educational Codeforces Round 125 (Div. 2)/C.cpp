#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	queue<char> q;
	cin >> n;
	rep(i, n) {
		char c;
		cin >> c;
		q.emplace(c);
	} 

	int C = 0, r = n;

	while (q.size() >= 2) {
		char a = q.front(); q.pop();
		char b = q.front(); q.pop();

		// () ans (( case
		if (a == '(') {
			C++;
			r -= 2;
			continue;
		}

		// )) case
		if (b == ')') {
			C++;
			r -= 2;
			continue;
		}

		// )( case
		int acc = 2;
		while (q.size()) {
			char e = q.front(); q.pop();
			acc++;
			if (e == '(') continue;
			C++;
			r -= acc;
			break;
		}
	}

	cout << C << " " << r << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
