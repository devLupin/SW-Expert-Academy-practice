#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int mem[21] = { 0, };
		int max = -1, first = 0;

		int n, m; cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				int temp; cin >> temp;
				if (temp == 1)
					mem[i]++;
			}
			max = (mem[i] > max) ? mem[i] : max;
		}

		for (int i = 1; i <= n; i++)
			if (max == mem[i])
				first++;

		cout << '#' << tc << ' ' << first << ' ' << max << '\n';
	}
	return 0;
}