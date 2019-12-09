#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int country, dist; 
		cin >> country >> dist;

		int numOfZero = 0, result = 0;
		for (int i = 0; i < country; i++) {
			int temp; cin >> temp;

			if (temp == 0)
				numOfZero++;
			else {
				result += (numOfZero / dist);
				numOfZero = 0;
			}
		}

		if (numOfZero != 0)
			result += (numOfZero / dist);

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}