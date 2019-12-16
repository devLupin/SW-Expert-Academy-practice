#include<iostream>
#include<ctime>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int s, e, m; cin >> s >> e >> m;
		int sun = 1, earth = 1, moon = 1;
		int result = 1;

		while (!(sun == s && earth == e && moon == m)) {
			sun++; earth++; moon++;
			if (sun > 365)
				sun = 1;
			if (earth > 24)
				earth = 1;
			if (moon > 29)
				moon = 1;

			result++;
		}
		cout << '#' << tc << ' ' << result << '\n';
	}
}