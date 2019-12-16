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
		s--; e--; m--;

		for (int i = 0; ; i += 365) {
			int result = s + i;
			if (result % 24 == e && result % 29 == m) {
				cout << '#' << tc << ' ' << result << '\n';
				break;
			}
		}
	}
	return 0;
}