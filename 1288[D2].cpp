#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int result = 0;
		bool chk[10] = { false, };
		int num; cin >> num;

		bool con = true;
		int increase = 1;

		while (1) {
			int n = num * increase;
			string temp = to_string(n);
			for (int i = 0; i != temp.size(); i++)
				chk[temp[i] - '0'] = true;

			con = false;
			for (int i = 0; i < 10; i++)
				if (!chk[i]) {
					con = true;
					break;
				}

			if (!con)
				break;

			increase++;
			result++;
		}

		cout << '#' << tc << ' ' << (result + 1) * num << '\n';
	}
	return 0;
}