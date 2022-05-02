#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n), d(n);
	rep(i, n) cin >> a[i];
	reverse(a.begin(), a.end());
	
	int b_size = 0;
	int i = 0, j = n - 1;
	for (auto val : a) {
		(b_size%2) ? b[i++] = val : b[j--] = val;
		b_size++;
	}

	if (n%2) {
		i = n/2, j = n/2;
	} else {
		i = n/2 - 1, j = n/2;
	}
	rep(k, n) {
		// odd, no choice
		if (((i+1)+(n-j)-(i==j)) % 2) {
			if ((i+1) > (n-j)) {
				c[k] = b[i];
				i--;
			} else {
				c[k] = b[j];
				j++;
			}
			continue;
		}

		// even
		if (b[i] < b[j]) {
			c[k] = b[i];
			i--;
		}
		else {
			c[k] = b[j];
			j++;
		}
	}

	rep(i, n) d[i] = c[i];
	sort(d.begin(), d.end());
	rep(i, n) if (d[i] != c[i]) {
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
