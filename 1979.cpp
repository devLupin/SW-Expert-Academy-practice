#include <iostream>
 
using namespace std;
 
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    int T, N, K, answer;
    cin >> T;
 
    for(int t_case=1; t_case<=T; t_case++) {
        cin >> N >> K;
        bool puzzle[N][N];
 
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cin >> puzzle[i][j];
            }
        }
 
        answer = 0;

        for(int i=0; i<N; i++) {
            int cnt = 0;
            int j=0;
            while(true) {
                if(!puzzle[i][j]) {
                    if(cnt == K)
                        answer++;
                    cnt = 0;
                    j++;
                } else {
                    cnt++;
                    j++;
                }
                if(j == N) {
                    if(cnt == K)
                        answer++;
                    break;
                }
            }
        }
        for(int i=0; i<N; i++) {
            int cnt = 0;
            int j=0;
            while(true) {
                if(!puzzle[j][i]) {
                    if(cnt == K)
                        answer++;
                    cnt = 0;
                    j++;
                } else {
                    cnt++;
                    j++;
                }
                if(j == N) {
                    if(cnt == K)
                        answer++;
                    break;
                }
            }
        }
        cout << "#" << t_case << " " << answer << "\n";
    }
    return 0;
}