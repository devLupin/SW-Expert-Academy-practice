#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		double result = 0;
		for (int j = 0; j < 10; j++) {
			int temp; cin >> temp;
			result += temp;
		}
		cout << "#" << i << ' ' << round(result/10) << '\n';
	}
	return 0;
}