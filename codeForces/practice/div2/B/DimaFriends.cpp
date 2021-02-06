#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        sum += temp;
    }

    int count = 0;
    for(int i = 1; i <= 5; i++){
        if((sum+i)%(n+1) != 1){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
