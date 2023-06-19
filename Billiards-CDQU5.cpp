#include <iostream>
using namespace std;
int n;
int dp[1000009];
int mod = 1000000009;
int score(int n){
    if(dp[n]!=-1)
    return dp[n];
    return dp[n]=(score(n-3)+score(n-2))%mod;
}
int main() {
    int c;
   
	cin >> c;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	for(int i=4;i<1000009;i++)
	dp[i]=-1;
	while(c--){
	cin >> n;
	cout << score(n)<<endl;
	}

	return 0;
}
