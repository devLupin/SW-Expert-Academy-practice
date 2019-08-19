#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int caseNum = 1;
	int tc; cin >> tc;
	while (tc--) {
		int f_hour, f_min, s_hour, s_min;
		cin >> f_hour >> f_min >> s_hour >> s_min;

		int hour, min;
		hour = f_hour + s_hour;
		min = f_min + s_min;

		if (min >= 60) {
			min -= 60;
			hour += 1;
		}
		if (hour >= 12)
			hour -= 12;

		cout << '#' << caseNum++ << ' ' << hour << ' ' << min << '\n';
	}
	return 0;
}