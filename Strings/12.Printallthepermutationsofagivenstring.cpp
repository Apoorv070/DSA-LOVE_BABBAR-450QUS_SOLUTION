#include<bits/stdc++.h>
using namespace std;
void func(string s,string asf){
    if(s.length()==0){
        cout<<asf<<" ";
        return ;
    }
    
    for(int i = 0 ; i < s.length()  ; i++){
        func(s.substr(0,i)+s.substr(i+1),asf+s[i]);
    }
    
}

int main()
 {
	//code
	int t;cin>>t;
	while(t--){
	    string s;cin>>s;
	    func(s,"");
	}
	
	return 0;
}
