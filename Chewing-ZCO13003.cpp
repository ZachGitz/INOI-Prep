#include <iostream>
using namespace std;
#include <algorithm>
long long search(long long arr[],long long k,long long n){
    for(long long i=0;i<n;i++){
        if(arr[i]>=k)
        return i;
    }
    return n-1;
}

int main() {
	long long n,k;
	cin >> n >> k;
	long long hard[n];
	for(long long i=0;i<n;i++){
	    cin >> hard[i];
	}
	sort(hard,hard+n);
	long long c=0;
	long long lim=search(hard,k,n);
	for(long long i=0;i<lim;i++){
	    for(long long j=i+1;j<lim;j++){
	        if(hard[i]+hard[j]<k)
	        c+=1;
	    }
	    
	}
	cout <<c;
	return 0;
}
