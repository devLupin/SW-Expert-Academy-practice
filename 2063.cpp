#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[200];

	int result;
	int tc; cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> arr[i];
	}
	sort(arr + 1, arr + tc);
	cout << arr[tc / 2 + 1];
	return 0;
}