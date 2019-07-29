#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	int tc; cin >> tc;
	for (int i = 1; i <= tc; i++) {
		int result = 0;
		for (int j = 0; j < 10; j++) {
			int temp; cin >> temp;
			if (temp % 2 != 0)
				result += temp;
		}
		cout << "#" << i << ' ' << result << '\n';
	}
	return 0;
}