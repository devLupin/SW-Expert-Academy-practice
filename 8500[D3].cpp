#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int arr[10000] = { 0, };
		int n = 0, result = 0; cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			result += arr[i];
		}
		sort(arr, arr + n);

		cout << '#' << tc << ' ' << result + arr[n - 1] + n << '\n';
	}
	return 0;
}