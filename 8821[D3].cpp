#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string str; cin >> str;
		int chk[10] = { false, };

		for (int i = 0; i < str.size(); i++) {
			if (!chk[str[i] - '0'])
				chk[str[i] - '0'] = true;
			else
				chk[str[i] - '0'] = false;
		}

		int result = 0;
		for (int i = 9; i >= 0; i--)
			if (chk[i])
				result++;

		cout << '#' << tc << ' ' << result << '\n';
	}
}