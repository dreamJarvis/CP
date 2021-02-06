#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int upperCase[28] = {0};
    int lowerCase[28] = {0};

    for(auto &i:str){
        if(i >= 65 && i <= 90)
            upperCase[i-'A']++;
        if(i >= 97 && i <= 122)
            lowerCase[i-'a']++;
    }

    int upperCount = 0, lowerCount = 0;
    for(int i = 0; i < 28; i++){
        if(upperCase[i])    upperCount += upperCase[i];
        if(lowerCase[i])    lowerCount += lowerCase[i];
    }

    if(upperCount > lowerCount){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else if(lowerCount >= upperCount){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }

    return 0;
}
/*
ISAGFJFARYFBLOPQDSHWGMCNKMFTLVFUGNJEWGWNBLXUIATXEkqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv

isagfjfaryfblopqdshwgmcnkmftlvfugnjewgwnblxuiatxekqiettmmjgydwcpafqrppdsrrrtguinqbgmzzfqwonkpgpcwenv
*/
