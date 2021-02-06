#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int a, b;
        cin >> a >> b;

        int minSteps = INT_MAX;
        int diff = abs(b-a);
        if(diff){
            for(int i = 10; i >= 1; i--){
                if(diff >= i){
                    int steps = diff/i;
                    if(diff%i)
                        steps++;
                    minSteps = min(minSteps, steps);
                }
            }
        }
        else{
            minSteps  = 0;
        }

        cout <<minSteps << endl;
    }

    return 0;
}
