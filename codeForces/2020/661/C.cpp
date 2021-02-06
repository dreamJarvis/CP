#include <bits/stdc++.h>
using namespace std;

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
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        unordered_map<int, set<int>> sumFreqI;
        unordered_map<int, set<int>> sumFreqII;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int sum = arr[i]+arr[j];
                sumFreqI[sum].insert(i);
                sumFreqII[sum].insert(j);
            }
        }

        int maxSize = 0;
        for(auto &i:sumFreqI){
            int s1 = i.second.size();
            int s2 = sumFreqII[i.first].size();
            int s = min(s1, s2);
            maxSize = max(maxSize, s);
        }

        cout << "ans :" << maxSize << endl;
    }

    return 0;
}
