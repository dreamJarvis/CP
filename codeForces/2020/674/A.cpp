#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int a, b;
        cin >> a >> b;

        if(a <= 2)
            cout << 1 << endl;
        else{
            int i = 3;
            int k = 2;
            while(1){
                if(a >= i && a < i+b){
                    cout << k << endl;
                    break;
                }

                k++;
                i+=b;
            }
        }
    }

    return 0;
}
