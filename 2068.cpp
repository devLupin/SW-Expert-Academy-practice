#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		int result = 0;

		for (int j = 0; j < 10; j++) {
			int temp; cin >> temp;
			if (result < temp)
				result = temp;
		}

		cout << '#' << i << ' ' << result << '\n';
	}
	return 0;
}