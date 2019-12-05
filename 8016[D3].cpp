#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		long long n; cin >> n;
		
		cout << '#' << tc << ' ' << 2 * ((n - 1) * (n - 1) + 1) - 1 << ' ' << 2 * n * n - 1 << '\n';
	}

	return 0;
}