#include <iostream>
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

        int moves = 0;
        int i = 0, j = 0;

        while(!arr[i] && i < n) i++;
        while(arr[i] && i < n)  i++;

        j = i-1;
        while(i < n){
            if(arr[i]){
                moves += max(0, (i-j-1));
                j = i;
            }
            i++;
        }

        cout << moves << endl;
    }

    return 0;
}
