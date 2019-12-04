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
		int min = 1000001, max = 0;

		for (int i = 0; i < 10; i++) {
			string num; cin >> num;

			int temp = 0;
			for (int j = 0; j < num.size(); j++) 
				temp += (num[j] - '0');

			if (min > temp) min = temp;
			if (max < temp) max = temp;
		}

		cout << '#' << tc << ' ' << max << ' ' << min << '\n';
	}
	return 0;
}