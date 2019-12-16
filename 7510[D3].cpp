#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int n, result = 1; cin >> n;

		int temp = 0;
		for (int i = 1; i < n; i++) {
			temp += i;
			for (int j = i + 1; j < n; j++) {
				temp += j;
				if (temp > n) {
					temp = 0;
					break;
				}
				if (temp == n) {
					result++;
					temp = 0;
					break;
				}
			}
		}

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}