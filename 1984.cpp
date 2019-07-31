#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int arr[10];
		double result = 0;
		int max = -1;
		int min = 10001;
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];

			result += arr[i];
		}
		cout << '#' << cnt++ << ' ' << round((result - max - min) / 8) << '\n';
	}
	return 0;
}