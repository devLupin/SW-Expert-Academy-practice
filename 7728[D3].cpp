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
		bool chk[10];
		int result = 0;
		string str = "";
		
		memset(chk, false, sizeof(chk));
		cin >> str;

		for (int i = 0; i < str.size(); i++)
			if (!chk[str[i] - '0']) {
				chk[str[i] - '0'] = true;
				result++;
			}

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}