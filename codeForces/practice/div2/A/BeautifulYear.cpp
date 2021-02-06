#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int yr;
    cin >> yr;

    for(int i = yr+1; i <= 9100; i++){
        string temp = to_string(i);
        int arr[10] = {0};
        arr[temp[0]-'0']++;
        arr[temp[1]-'0']++;
        arr[temp[2]-'0']++;
        arr[temp[3]-'0']++;

        bool flag = true;
        for(auto &j:temp){
            if(arr[j-'0'] > 1){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << temp << endl;
            break;
        }
    }

    return 0;
}
