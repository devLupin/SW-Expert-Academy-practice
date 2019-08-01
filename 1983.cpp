#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(void)
{
	string score[] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };

	int cnt = 1;
	int tc;	cin >> tc;
	while (tc--) {
		int n, k; cin >> n >> k;
		priority_queue<pair<double,int>> pq;

		for (int i = 1; i <= n; i++) {
			double mid_term, _final, assign;
			cin >> mid_term >> _final >> assign;

			double input = (mid_term * 0.35) + (_final * 0.45) + (assign * 0.2);
			pq.push({ input, i });
		}

		int num = 0;
		while (!pq.empty()) {
			pair<double, int> cur = pq.top();
			pq.pop();
			num++;

			if (cur.second == k) {
				
				cout << '#' << cnt++ << ' ' << score[(num - 1) / (n / 10)] << '\n';
				break;
			}			
		}
	}
	return 0;
}