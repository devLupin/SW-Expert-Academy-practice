#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int watch, result = 0;
		int n, b, e; cin >> n >> b >> e;

		for (int i = 0; i < n; i++) {
			cin >> watch;
			
			for(int j=b-e; j<b+e; j++)
				if (j % watch == 0) {
					result++;
					break;
				}
		}
		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}