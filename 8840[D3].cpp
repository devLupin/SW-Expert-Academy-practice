#include<iostream>
using namespace std;

using ll = long long;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ll tc; cin >> tc;
	
	for (ll T = 1; T <= tc; T++) {
		ll n; cin >> n;

		cout << '#' << T << ' ' << ((n - 1) / 2) * ((n - 1) / 2) << '\n';
	}

	return 0;
}