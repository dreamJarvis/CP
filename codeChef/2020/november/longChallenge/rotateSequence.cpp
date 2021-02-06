#include <iostream>
#include <unordered_map>
#include <cstring>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int  N;
        cin >> N;

        int B[N];
        for(int i = 0; i < N; i++){
            cin >> B[i];
        }

        unordered_map<int, bool> visited;
        int A[N];
        memset(A, 0, sizeof(A));

        unordered_map<int, vector<int>> index;
        int num = 2;
        for(int i = 0; i < N; i++){
            if(B[i]-1 != i){
                A[i] = num;
                if(!A[B[i]-1]){
                    index[B[i]-1].push_back(num);
                    A[B[i]-1] = num*2;
                }
                else if(A[B[i]-1]){
                    visited[A[B[i]-1]] = false;

                    int a = num;
                    int b = index[B[i]-1].back();
                    int MaxPr = a*b;
                    int minNum = min(a, b);

                    int k = minNum;
                    for(; k <= MaxPr; k++){
                        if(k%a == 0 && k%b == 0)
                            break;
                    }

                    A[B[i]-1] = k;
                    index[B[i]-1].push_back(k);
                }
            }else{
                if(!A[B[i]-1])
                    A[i] = num;
            }

            visited[A[B[i]-1]] = true;
            visited[num] = true;

            int k = 2;
            while(visited[k])   k++;
            num = k;
        }

        // output
        for(int i = 0; i < N; i++)
            cout << A[i] << " ";
        cout << endl;

    }

    return 0;
}
