#include <iostream>
using namespace std;
int maxIndex(int arr[],int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(arr[c]<arr[i])
        c=i;
    }
    return c;
}
int main() {
	int n;
	cin >> n;
	int p1[n];
	int p2[n];
	int winner[n];
	int diff[n];
	for(int i=0;i<n;i++){
	    cin>>p1[i];
	    cin>>p2[i];
	}
	for(int i=1;i<n;i++){
	    p1[i]+=p1[i-1];
	    p2[i]+=p2[i-1];
	}
	for(int i=0;i<n;i++){
	    
	    if(p1[i]>p2[i]){
	    winner[i]=1;
	    diff[i]=p1[i]-p2[i];}
	    if(p2[i]>p1[i]){
	    winner[i]=2;
	    diff[i]=p2[i]-p1[i];}
	}
	int c=maxIndex(diff,n);
	cout << winner[c]<<" "<<diff[c];
	return 0;
}
