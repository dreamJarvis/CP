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

        string str;
        cin >> str;

        bool ans = false;
        int s = n-1;
        if(str == "2020")
            ans = true;
        else if(str.substr(0, 4) == "2020")
            ans = true;
        else if(str.substr(n-4, 4) == "2020")
            ans = true;
        else if(n >= 4){
            for(int i = 1; i < 4; i++){
                string temp = str.substr(0, i) + str.substr(s-(3-i));
                if(temp == "2020")
                    ans |= true;
            }
        }

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
