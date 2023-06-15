#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main() {
	int n;
	cin >> n;
	long a[n],b[n];
	for(int i =0 ; i<n;i++){
	    cin >> a[i];
	}
      
      
    sort(a,a+n);
	
	for(int i=0;i<=n;i++){
	   b[i] =a[i]*(n-i);
	}
	sort(b,b+n);
	cout << b[n-1];
	
 return 0;
}
