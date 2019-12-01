#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	cin.ignore();
	for (int tc = 1; tc <= T; tc++) {
		string str; getline(cin, str);
		string result = "";

		result += (str[0] - 32);
		for (int i = 1; i < str.size(); i++) {
			if (str[i] == ' ') {
				result += (str[i + 1] - 32);
				i++;
			}
		}

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}