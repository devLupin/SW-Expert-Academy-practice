#include<iostream>
using namespace std;

int map[16][16];

const int dy[] = { 1,0 };
const int dx[] = { 0,1 };

int n, m;
int ans;

void dfs(int y, int x, int cost, int k) {
	if (cost == 1)
		ans++;
	else if (cost == 0) {
		ans--;
		return;
	}


	int ny = y + dy[k];
	int nx = x + dx[k];

	if (ny < n && nx < n && map[ny][nx] == 1)
		dfs(ny, nx, cost - 1, k);
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for (int t = 1; t <= tc; t++) {
		cin >> n >> m;

		ans = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> map[i][j];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < 2; k++) {
					int py = i - dy[k];
					int px = j - dx[k];

					if (map[i][j] == 0)
						continue;

					if (py >= 0 && px >= 0 && map[py][px] == 1)
						continue;
					dfs(i, j, m, k);
				}
			}

		cout << '#' << t << ' ' << ans << '\n';
	}
	return 0;
}
