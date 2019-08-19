#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[50];

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int num; cin >> num;

		for (int i = 0; i < num; i++)
			cin >> arr[i];

		sort(arr, arr + num);

		cout << '#' << cnt++;
		for (int i = 0; i < num; i++)
			cout << ' ' << arr[i];
		cout << '\n';
	}
	return 0;
}