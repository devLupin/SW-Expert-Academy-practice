#include<iostream>
#define ABS(N) (N < 0) ? ((N)*(-1)) : (N)
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int arr[1001] = { -1, };
		int num; cin >> num;
		int max = 0x2f2f2f2f;
		int result = 0;

		for (int i = 0; i < num; i++) {
			int temp; cin >> temp;
			arr[i] = ABS(temp);

			max = (max < arr[i]) ? max : arr[i];
		}

		for (int i = 0; i < num; i++)
			if (max == arr[i])
				result++;

		cout << '#' << tc << ' ' << max << ' ' << result << '\n';
	}
	return 0;
}