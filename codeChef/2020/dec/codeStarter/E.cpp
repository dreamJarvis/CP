#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FIO;

    int tc, n;
    cin >> tc;

    while(tc--){
        cin >> n;

        int totalSum = 0;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            totalSum += arr[i];
        }

        int minWaste = INT_MAX, wireLen = INT_MAX, count = 0;
        for(int i = 0; i < n; i++){
            int t = arr[i]*(totalSum/arr[i]);
            if(totalSum%arr[i])
                t += arr[i];

            if(abs(t-totalSum) < minWaste && arr[i] < wireLen){
                wireLen = arr[i];
                count = t/arr[i];
                wireLen = arr[i];
                minWaste = abs(t-totalSum);
            }
        }


        cout << wireLen << " " << count << endl;
    }

    return 0;
}
