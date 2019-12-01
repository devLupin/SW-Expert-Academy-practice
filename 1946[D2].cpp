#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		string result = "";
		int len = 0;

		int m; cin >> m;
		while (m--) {
			char opt; int n; cin >> opt >> n;

			for (int i = 0; i < n; i++) {
				result += opt;
				len++;
			}
		}

		cout << '#' << tc << '\n';
		for (int i = 0; i < len; i++) {
			if (i % 10 == 0 && i != 0)
				cout << '\n';
			cout << result[i];
		}
		cout << '\n';
	}
}