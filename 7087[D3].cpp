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
		bool alpha[26];
		int n, result = 0; cin >> n;
		
		memset(alpha, false, sizeof(alpha));

		for (int i = 0; i < n; i++) {
			string str; cin >> str;

			if (!alpha[str[0] - 'A'])
				alpha[str[0] - 'A'] = true;
		}

		for (int i = 0; i < n; i++, result++)
			if (!alpha[i])
				break;
		
		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}