#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		string date; cin >> date;
		string temp_year = date.substr(0, 4);
		string temp_mon = date.substr(4, 2);
		string temp_day = date.substr(6, 2);

		int mon = atoi(temp_mon.c_str());
		int day = atoi(temp_day.c_str());

		if (mon < 1 || mon > 12) {
			cout << '#' << i << ' ' << -1 << '\n';
			continue;
		}
		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			if (day < 1 || day > 30) {
				cout << '#' << i << ' ' << -1 << '\n';
				continue;
			}
		}
		if (mon == 2 && (day < 1 || day > 28)) {
			cout << '#' << i << ' ' << -1 << '\n';
			continue;
		}
		else if (day < 1 || day > 31) {
			cout << '#' << i << ' ' << -1 << '\n';
			continue;
		}

		cout << '#' << i << ' ' << temp_year << '/' << temp_mon << '/' << temp_day << '\n';
	}
	return 0;
}
