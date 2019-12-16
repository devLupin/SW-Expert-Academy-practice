#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	char nospace[] = { 'C','E','F','G','H','I','J','K','L','M','N','S','T','U','V','W','X','Y','Z' };
	char onespace[] = { 'A','D','O','P','Q','R' };

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string str1, str2; cin >> str1 >> str2;
		
		if (str1.size() != str2.size()) {
			cout << '#' << tc << ' ' << "DIFF" << '\n';
			continue;
		}
		for (int i = 0; i < str1.size(); i++) {
			bool chk1 = false, chk2 = false;
			for (int j = 0; j < 6; j++) {
				if (chk1 && chk2)
					break;

				if (str1[i] == 'B')
					chk1 = true;
				if (str2[i] == 'B')
					chk2 = true;

				if (onespace[j] == str1[i]) {
					str1[i] = '^';
					chk1 = true;
				}
				if (onespace[j] == str2[i]) {
					str2[i] = '^';
					chk2 = true;
				}
			}

			for (int j = 0; j < 19 && !(chk1 && chk2); j++) {
				if (chk1 && chk2)
					break;

				if (nospace[j] == str1[i]) {
					str1[i] = '%';
					chk1 = true;
				}
				if (nospace[j] == str2[i]) {
					str2[i] = '%';
					chk2 = true;
				}
			}
		}
		int chk = true;
		for (int i = 0; chk && i < str1.size(); i++) {
			if (str1[i] != str2[i]) {
				cout << '#' << tc << ' ' << "DIFF" << '\n';
				chk = false;
				break;
			}
		}
		if (chk)
			cout << '#' << tc << ' ' << "SAME" << '\n';
	}
	return 0;
}