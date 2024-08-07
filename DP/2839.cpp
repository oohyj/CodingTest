#include <iostream>

using namespace std;
int dp[5001]; // global 변수이기때문에 0으로 초기화된 배열

int main(){
    int n;
    cin >> n;
    dp[3] = dp[5] = 1;

    for(int i=6; i<=n; i++){
       if(dp[i-3]){
           dp[i] = dp[i-3] +1;
       }
       if(dp[i-5]) dp[i] = dp[i] ? min(dp[i] , dp[i-5] +1) : dp[i-5] +1;
    }

    cout << (dp[n] ==0? -1 : dp[n]) <<'\n';

    return 0;
}

