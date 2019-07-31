#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int result = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0)
				result -= i;
			else
				result += i;
		}
		cout << '#' << cnt++ << ' ' << result << '\n';
	}
	return 0;
}