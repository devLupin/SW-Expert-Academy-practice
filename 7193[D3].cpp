#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int n, add = 0;
		string x; 
		cin >> n >> x;
		for (int i = x.size() - 1; i >= 0; i--) {
			add += (x[i] - '0');
		}
		cout << '#' << tc << ' ' << add % (n - 1) << '\n';
	}
	return 0;
}