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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int freq[n+1];
        memset(freq, 0, sizeof(freq));
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }

        int element = -1;
        for(int i = 0; i < n+1; i++){
            if(freq[i] == 1){
                element =  i;
                break;
            }
        }

        int index = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] == element){
                index = i+1;
                break;
            }
        }

        cout << index << endl;
    }

    return 0;
}
