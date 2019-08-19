#include<iostream>
using namespace std;

int coin[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int ans[8] = { 0, };
		int cost; cin >> cost;

		int idx = 0;
		while (cost > 0 && idx < 8) {
			while (cost - coin[idx] >= 0) {
				ans[idx]++;
				cost -= coin[idx];
			}
			idx++;
		}

		cout << '#' << cnt++ << '\n';
		for (int i = 0; i < 8; i++)
			cout << ans[i] << ' ';
		cout << '\n';
	}
	return 0;
}