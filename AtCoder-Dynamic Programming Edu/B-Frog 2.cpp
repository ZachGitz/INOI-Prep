#include <iostream>
#include <vector>
using namespace std;

const int INF = 1000000001;
int main(){
int n,k;cin>>n >> k;
int arr[n];
int dp[n];
dp[0]=0;
for(int i=0;i<n;i++) cin >> arr[i];

for(int i=1;i<n;i++)
{
    dp[i]=INF;
    for(int j=1;j<=k;j++){
            if(i-j>=0){
    dp[i]=min(dp[i], dp[i-j]+abs(arr[i-j]-arr[i]));
    }
 }
}

cout << dp[n-1];
return 0;
}
