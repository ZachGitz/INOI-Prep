#include <iostream>
#include <vector>
using namespace std;


using namespace std;
int main(){
int n;cin>>n;
int arr[n];
int dp[n];
for(int i=0;i<n;i++) cin >> arr[i];
dp[0]=0;
dp[1]=abs(arr[1]-arr[0]);
for(int i=2;i<n;i++)
{
    dp[i]=min(abs(arr[i-1]-arr[i])+dp[i-1], abs(arr[i-2]-arr[i])+dp[i-2]);
}

cout << dp[n-1];
return 0;
}
