#include <bits/stdc++.h>
using namespace std;

// Drive function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int N;
        cin >> N;

        int t[N] = {0};
        for(int i = 0; i < N; i++)
            cin >> t[i];

        sort(t, t+N);

        int totalTime = t[N-1];
        int prev = t[N-1];
        int sum = 0;
        for(int i = N-2; i >= 0; i--){
            sum += t[i];
            if(sum > prev){
                prev = abs(prev-sum);
                sum = 0;
                totalTime += prev;
            }
        }

        cout << totalTime << endl;
    }

    return 0;
}
