#include<iostream>
using namespace std;

int main(void) 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc; cin >> tc;
	while (tc--) {
		int numOfScore[1001] = { 0, };
		int max_numOfScore = -1;
		int max_score = -1;

		int cnt; cin >> cnt;

		for (int i = 0; i < 1000; i++) {
			int temp; cin >> temp;
			numOfScore[temp]++;
			
			if (max_numOfScore <= numOfScore[temp]) {
				if (max_score == temp) {
					max_score = (max_score < temp) ? temp : max_score;
					max_numOfScore = (max_numOfScore < numOfScore[temp]) ? numOfScore[temp] : max_numOfScore;
				}
				max_numOfScore = numOfScore[temp];
				max_score = temp;
			}
		}

		cout << '#' << cnt << ' ' << max_score << '\n';
	}
	return 0;
}