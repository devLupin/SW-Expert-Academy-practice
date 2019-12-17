#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int n, m, max = -1; cin >> n >> m;
		int arr[41] = { 0, };
		
		for (int i = 1; i <= n; i++) 
			for (int j = 1; j <= m; j++) {
				arr[i + j]++;
				max = (max > arr[i + j]) ? max : arr[i + j];
			}
			
		cout << '#' << tc << ' ';
		for (int i = 1; i < n + m; i++)
			if (arr[i] == max)
				cout << i << ' ';
		cout << '\n';
	}
	return 0;
}