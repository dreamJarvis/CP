#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5];
    int posI, posJ;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j]){
                posI = i;
                posJ = j;
            }
        }
    }

    int dis = abs(2-posI) + abs(2-posJ);
    cout << dis << endl;
    return 0;
}
