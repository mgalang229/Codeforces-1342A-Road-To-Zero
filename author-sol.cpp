#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long x, y;
		cin >> x >> y;
		long long a, b;
		cin >> a >> b;
		if (x < y) { // assume x is greater than or equal to y
			swap(x, y);
		}
		// first, we need to make x and y equal by removing the gap between them
		long long make_it_equal = (x - y) * a;
		// second, we need to make them both equal to zero (there are 2 ways):
		// 1. use the second operation (simultaneously decrease the values to 0)
		// 2. use the first operation twice (make x equal to 0, then do the same with y)
		long long make_it_zero = y * min(b, a + a);
		cout << make_it_equal + make_it_zero << '\n';
	}
	return 0;
}
