#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;

	for (int testcase = 1; testcase <= tc; testcase++) {
		int arr[10][10] = { 0, };
		int n; cin >> n;

		int copy = n;

		int row = 0, col = -1, num = 1;
		int temp = 1;
		while (true) {
			for (int i = 0; i < copy; i++) {
				col = col + temp;
				arr[row][col] = num++;
			}

			copy--;
			if (copy < 0) break;

			for (int i = 0; i < copy; i++) {
				row = row + temp;
				arr[row][col] = num++;
			}

			temp = -temp;
		}

		cout << '#' << testcase << '\n';
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << arr[i][j] << ' ';
			cout << '\n';
		}
	}

	return 0;
}