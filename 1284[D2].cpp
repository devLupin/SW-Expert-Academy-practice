#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int p, q, r, s, w;
		cin >> p >> q >> r >> s >> w;

		int a = p * w;
		int b;
		if (r >= w)
			b = q;
		else
			b = q + (s * (w - r));

		int result = (a < b) ? a : b;
		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}