#include<iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt = 1;
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;

		int arr[100] = { 0, };
		arr[0] = 1;

		int start = 0;
		int leftchild = 1, rightchild = 2;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				arr[start + leftchild] += arr[start];
				arr[start + rightchild] += arr[start];
				start++;
			}
			leftchild++;
			rightchild++;
		}
		cout << '#' << cnt++ << '\n';
		start = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				cout << arr[start] << ' ';
				start++;
			}
			cout << '\n';
		}
	}
	return 0;
}