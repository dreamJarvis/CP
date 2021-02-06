#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int ans;
        cin >> ans;

        int n = ans%10;
        string t = to_string(ans);
        int len = t.length();
        int sum = (n-1)*(10) + len*(len+1)/2;
        cout << sum << endl;
    }
    
    return 0;
}
