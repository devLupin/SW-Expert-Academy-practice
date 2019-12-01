#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cal[] = { 11, 7, 5, 3, 2 };

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int arr[5] = { 0, };
		int num; cin >> num;

		int temp = num;
		while (temp > 1) {
			for (int i = 0; i < 5; i++) {
				if (!(temp % cal[i])) {
					temp = temp / cal[i];
					arr[i]++;
				}
			}
		}

		cout << '#' << tc << ' ';
		for (int i = 4; i >= 0; i--)
			cout << arr[i] << ' ';
		cout << '\n';
	}
}