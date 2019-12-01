#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int testcase; cin >> testcase;
	for (int tc = 1; tc <= testcase; tc++) {
		int startM, startD, endM, endD;
		cin >> startM >> startD >> endM >> endD;

		int result = 0;
		for (int i = startM+1; i < endM; i++)
			result += arr[i];

		result += arr[startM] - startD + 1;
		
		if(startM != endM)
			result += endD;

		cout << '#' << tc << ' ' << result << '\n';
	}
	return 0;
}