#include <iostream>
#include <cstring>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool arr[3][3];
    memset(arr, true, sizeof(arr));

    int temp;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> temp;

            if(temp%2 != 0){
                arr[i][j] = !arr[i][j];
                if(i-1 >= 0 && j >= 0)
                    arr[i-1][j] = !arr[i-1][j];
                if(i+1 < 3 && j >= 0)
                    arr[i+1][j] = !arr[i+1][j];
                if(i >= 0 && j-1 >= 0)
                    arr[i][j-1] = !arr[i][j-1];
                if(i >= 0 && j+1 < 3)
                    arr[i][j+1] = !arr[i][j+1];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] ;
        cout << endl;
    }

    return 0;
}
