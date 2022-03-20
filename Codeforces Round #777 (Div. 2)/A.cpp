#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	if (n%3 == 0) {
		bool two = 1;
		while (n) {
			cout << (two?2:1);
			n -= two?2:1;
			two = !two;
		}
		cout << endl;
		return;
	}
	// try start with 2 first
	bool two = 1;
	int N = n;
	while (1) {
		N -= two?2:1;
		two = !two;
		if (N==0) {
			two = 1;
			while (n) {
				cout << (two?2:1);
				n -= two?2:1;
				two = !two;
			}
			cout << endl;
			return;
		}
		if (N<0) break;
	}

	// print 1 first
	two = 0;
	while (n) {
		cout << (two?2:1);
		n -= two?2:1;
		two = !two;
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	rep(i, t) solve();
}
