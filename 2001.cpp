#include<iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int n, m; cin >> n >> m;
		int arr[15][15];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		int result = 0;
		for (int i = 0; i <= n - m; i++) {
			for (int j = 0; j <= n - m; j++) {
				int start = arr[i][j];

				bool check = true;
				int temp = 0;
				for (int k = i; k < i + m; k++)
					for (int l = j; l < j + m; l++)
						temp += arr[k][l];

				result = (result < temp) ? temp : result;
			}
		}
		cout << '#' << cnt++ << ' ' << result << '\n';
	}
	return 0;
}