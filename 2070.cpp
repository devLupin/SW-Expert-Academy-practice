#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		int cmp1; int cmp2;
		cin >> cmp1 >> cmp2;

		if (cmp1 < cmp2)
			cout << '#' << i << ' ' << '<' << '\n';
		else if (cmp1 > cmp2)
			cout << '#' << i << ' ' << '>' << '\n';
		else
			cout << '#' << i << ' ' << '=' << '\n';
	}
}