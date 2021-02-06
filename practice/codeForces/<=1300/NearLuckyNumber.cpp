#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int count = 0;
    for(auto &i:str)
        if(i == '4' || i == '7')
            count++;

    if(count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
