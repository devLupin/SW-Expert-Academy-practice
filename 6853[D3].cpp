#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int r1 = 0, r2 = 0, r3 = 0;
		int x1, y1, x2, y2, n;
		cin >> x1 >> y1 >> x2 >> y2 >> n;

		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;

			if (x < x1 || x2 < x || y < y1 || y2 < y) {
				r3++;
			}
			else if (x == x1 || x == x2 || y == y1 || y == y2) {
				r2++;
			}
			else {
				r1++;
			}
		}

		cout << '#' << tc << ' ' << r1 << ' ' << r2 << ' ' << r3 << '\n';
	}
	return 0;
}