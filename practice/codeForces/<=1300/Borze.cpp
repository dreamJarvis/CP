#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int i = 0;
    string ans="";
    while(i < str.length()){
        if(str[i] == '.'){
            ans += '0';
            i++;
        }
        else if(str[i] == '-'){
            if(str[i+1] == '.')
                ans += '1';
            else if(str[i+1] == '-')
                ans += '2';
            i+=2;
        }
    }

    cout << ans << endl;

    return 0;
}
