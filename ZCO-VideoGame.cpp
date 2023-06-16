#include <iostream>

using namespace std;

int main()
{
    int n,h;
	cin >> n >> h;
    int cranePos=0;
    bool hasBox=false;
    int stackBoxes[n];
    for(int i=0;i<n;i++){
            cin >> stackBoxes[i];
        }
        int a=1;
        
	while(a!=0){
	    cin >> a;
	    if(a==1){
	      if(cranePos!=0){
          cranePos-=1;}
}
	    
	    if(a==2)
	      if(cranePos!=n-1){
            cranePos+=1;}
	    
	    
	    if(a==3){
	    if(hasBox==false&&stackBoxes[cranePos]!=0){
        hasBox=true;
        stackBoxes[cranePos]-=1;
    }
	        
	    }
	    
	    
	    if(a==4){
	       if(hasBox==true&&stackBoxes[cranePos]!=h){
            hasBox=false;
            stackBoxes[cranePos]+=1;
         }
	        
	  }
	  
	    }
	    
for(int i=0;i<n;i++){
            cout << stackBoxes[i]<<" ";
	}
    return 0;
}
