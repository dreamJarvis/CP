#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    if(str[0] >= 97 && str[0] <= 122){
        int index = str[0] - 'a';
        int newIndex = 65 + index;
        char ch = newIndex;
        string result = ch + str.substr(1);
        cout << result << endl;
    }
    else    cout << str << endl;


    return 0;
}
