#include<iostream>
using namespace std;

const int SZ = 9;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int caseNum = 1;
	int tc; cin >> tc;
	while (tc--) {
		int map[SZ][SZ];
		int ans = 1;

		for (int y = 0; y < SZ; y++)
			for (int x = 0; x < SZ; x++)
				cin >> map[y][x];

		for (int y = 0; y < SZ; y++) {
			int col_sum = 0, row_sum = 0;
			
			for (int x = 0; x < SZ; x++) {
				row_sum += map[y][x];
				col_sum += map[x][y];
			}

			if (col_sum != 45 || row_sum != 45) {
				ans = 0;
				break;
			}
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {

				int sqr_sum = 0;

				for (int y = i * 3; y < i * 3 + 3; y++)
					for (int x = j * 3; x < j * 3 + 3; x++)
						sqr_sum += map[y][x];

				if (sqr_sum != 45) {
					ans = 0;
					break;
				}
			}
			if (ans == 0)
				break;
		}
		cout << '#' << caseNum++ << ' ' << ans << '\n';
	}
	return 0;
}