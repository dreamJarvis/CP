/*  upsollved
    editorial :https://codeforces.com/blog/entry/85594
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        int arr[n];
        int totalSum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            totalSum += arr[i];
        }

        for(int k = n; k >= 1; k--){
            if(totalSum%k==0){
                ll partitionSum = totalSum/k;
                ll currSum = 0;

                bool flag = true;
                for(int j = 0; j < n; j++){
                    currSum += arr[j];

                    if(currSum > partitionSum){
                        flag = false;
                        break;
                    }
                    else if(currSum == partitionSum){
                        currSum = 0;
                    }
                }

                if(flag){
                    cout << (n-k) << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
