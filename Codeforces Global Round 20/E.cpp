#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

void ternary_search() {
	int x, y;
	cin >> x >> y;
	auto f = [x, y](const double h) { return (x-2*h)*(y-2*h)*h; };

	double lo = some_lower_bound;
	double hi = some_upper_bound;
	for (int i = 0; i < 50; i++) {
		double delta = (hi-lo)/3.0;
		double m1 = lo + delta;
		double m2 = hi - delta;
		(f(m1)<f(m2)) ? lo = m1 : hi = m2;
		// < for max value, > for min value
	}
	printf("%.8f\n", f(lo));
	// f(lo) for the y val, lo for the x val
}

void solve() {
	int n;
	cin >> n;

	int lo = 1;
	int hi = (n+1) * 2001;

	auto f = [x, y](const double h) { return (x-2*h)*(y-2*h)*h; };

	rep(_, n + 30) {
		double delta = (hi - lo) / 3;
		double m1 = lo + delta;
		double m2 = hi - delta;
		(f(m1)>f(m2)) ? lo = m1 : hi = m2;
	}

	printf();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	rep(i, t) solve();
}
