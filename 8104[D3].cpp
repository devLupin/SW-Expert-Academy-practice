#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int arr[21] = { 0, };
		int n, k; cin >> n >> k;


		int start = 1, end = k;
		bool sch = true;
		for (int i = 1; i <= n; i++) {
			if (sch)
				for (int j = start, m = 1; j <= end; j++, m++)
					arr[m] += j;

			else
				for (int j = start, m = k; j <= end; j++, m--)
					arr[m] += j;

			start += k, end += k;
			sch = !sch;
		}

		cout << '#' << tc << ' ';
		for (int i = 1; i <= k; i++)
			cout << arr[i] << ' ';
		cout << '\n';
	}

	return 0;
}