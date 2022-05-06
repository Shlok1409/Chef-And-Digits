#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	   string a;
        cin>>a;
	    
	    int z=0,o=0;
	    
	    for(int i=0;i<a.length();i++){
	        if(a[i]=='0'){
	            z++;
	        }
	        else if(a[i]=='1'){
	            o++;
	        }
	    }
	    
	    if(a.length()==1){
	        cout<<"Yes"<<endl;
	    }
	    
	    else if(min(z,o)==1){
	        cout<<"Yes"<<endl;
	    }
	    
	    else {
	        cout<<"No"<<endl;
	    }
   
	}

	return 0;
}
