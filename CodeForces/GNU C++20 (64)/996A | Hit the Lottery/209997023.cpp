#include <iostream>
using namespace std;
#include <algorithm>
 
 
int main() {
  int n;
  cin >> n;
  int coun=0;
  while(n!=0){
  if(n>=100){
    coun+=n/100;
    n=n%100;
  }
  else if(n>=20){
    coun+=n/20;
    n=n%20;
  }
  else if(n>=10){
    coun+=n/10;
    n=n%10;
  }
  else if(n>=5){
    coun+=n/5;
    n=n%5;
  }
  else if(n>=1){
    coun+=n/1;
    n=n%1;
  }
  }
  cout << coun;
 return 0;
}