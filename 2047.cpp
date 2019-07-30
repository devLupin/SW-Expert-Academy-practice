#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str; cin >> str;
	for (auto i = 0; i < str.size(); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ('A' - 'a') + str[i];

	cout << str;
	return 0;
}