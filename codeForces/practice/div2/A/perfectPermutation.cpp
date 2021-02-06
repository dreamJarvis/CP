#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n%2 != 0){
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        arr[i] = i+1;

    for(int i = 1; i < n; i+=2){
        swap(arr[i], arr[i-1]);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
