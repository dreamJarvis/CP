#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     //              0  1  2  3  4
    // int arr[] =  {5, 3, 4, 4, 5};
    // int count[] ={-1,0, 2, 2, 2}
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int arr[] = {1, 1, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int arr[] = {5, 5, 4, 3, 2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int arr[] = {1, 1, 2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int arr[] = {5, 4, 3, 5, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    //
    // int count[n];
    // memset(count, -1, sizeof(count));
    //
    // for(int i = 0; i < n; i++){
    //     if(count[i] != -1 && arr[count[i]] >= arr[i+1]){
    //         count[i+1] = count[i];
    //     }
    //     else if(arr[i] > arr[i+1]){
    //         count[i+1] = i;
    //     }
    //     else if(arr[i] < arr[i+1]){
    //         count[i+1] = i+1;
    //     }
    //
    //     // for(int i = 0; i < n; i++)
    //     //     cout << count[i] << " ";
    //     // cout << endl;
    // }
    //
    // if(count[n-1] != -1)
    //     cout << "a : " << count[n-1]+1 << endl;
    // else
    //     cout << "a : " << -1 << endl;

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int count[n];
        memset(count, -1, sizeof(count));

        for(int i = 0; i < n; i++){
            if(count[i] != -1 && arr[count[i]] >= arr[i+1]){
                count[i+1] = count[i];
            }
            else if(arr[i] > arr[i+1]){
                count[i+1] = i;
            }
            else if(arr[i] < arr[i+1]){
                count[i+1] = i+1;
            }
        }

        if(count[n-1] != -1)
            cout << count[n-1]+1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
