#include<iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int result = 0;
	int r = 10;
	int n; cin >> n;

	while (n > 0) {
		int temp = n % r;
		result += temp / (r/10);
		
		r *= 10;
		n -= temp;
	}
	cout << result;
	return 0;
}