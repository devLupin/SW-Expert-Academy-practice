#include<iostream>
using namespace std;
int arr[1000001];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		int n; cin >> n;

		for (int j = 0; j < n; j++)
			cin >> arr[j];
		
		long long result = 0;
		int price = arr[n-1];

		for(int j = n-2; j>=0; j--){
			if (price > arr[j])
				result += price - arr[j];
			else
				price = arr[j];
		}
		cout << '#' << i << ' ' << result << '\n';
	}
	return 0;
}