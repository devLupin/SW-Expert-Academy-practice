#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int result = 0;
		int n; cin >> n;
		
		int cur = 0;
		for (int i = 0; i < n; i++) {
			int cmd, opt;
			cin >> cmd;

			if (cmd == 0)
				result += cur;
			else if (cmd == 1) {
				cin >> opt;

				cur += opt;
				result += cur;
			}
			else {
				cin >> opt;

				cur -= opt;
				if (cur < 0)
					cur = 0;
				result += cur;
			}
		}

		cout << '#' << tc << ' ' << result << '\n';
	}
}