#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	for (int t = 1; t <= tc; t++) {
		string str; cin >> str;
		int j = 0;

		for (int i = 1; i < str.size(); i++) {
			if (str[i] == str[j])
				j++;
			else
				j = 0;
		}

		cout << '#' << t << ' ' << str.size() - j << '\n';
	}
	return 0;
}