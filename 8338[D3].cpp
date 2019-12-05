#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int arr[10] = { 0, };
		int n, result = 0;
		cin >> n;

		if (n <= 1)
			cin >> result;
		else {
			int a, b; cin >> a >> b;
			result += ((a * b) > (a + b) ? (a * b) : (a + b));
			
			for (int i = 2; i < n; i++) {
				int temp; cin >> temp;
				result = ((result * temp) > (result + temp) ? (result * temp) : (result + temp));
			}
		}

		cout << '#' << tc << ' ' << result << '\n';
	}

	return 0;
}