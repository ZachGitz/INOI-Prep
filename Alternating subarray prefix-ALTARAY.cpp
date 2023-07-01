#include <iostream>
using namespace std;

int main() {
	int n;cin >>n;
	while (n--){
	    int k ; cin >> k;
	    int arr[k]; for(int i=0;i<k;i++)cin>> arr[i];
	    int dp[k];
	    dp[k-1]=1;
	    int c;
	    for(int i=k-2;i>=0;i--){
	    if(arr[i]>0&&arr[i+1]<0||arr[i]<0&&arr[i+1]>0)
	            dp[i]=dp[i+1]+1;
	    else 
	    dp[i]=1;
	    }
	    for(int i=0;i<k;i++) cout << dp[i] <<" ";
	    cout << endl;
	}
	return 0;
}
