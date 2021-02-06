#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int num=0;
    for(int i = n+1; i <= 50; i++){
        bool flag = true;
        for(int j = 2; j <= 9; j++){
            if(j != i && i%j == 0)
                flag = false;
        }

        if(flag){
            num = i;
            break;
        }
    }

    if(num == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
