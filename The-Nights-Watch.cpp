#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int count=0,ans=0;
	   for(int i=0;i<n;i++){
	      if(s[i]=='1')
	      count++;
	   }
	   if(s[0]=='0' && s[1]=='0'){
	       s[0]='1';
	       ans++;
	   }
	   for(int i=1;i<n-1;i++){
	       if(s[i-1]=='0' && s[i]=='0' && s[i+1]=='0'){
	           s[i]='1';
	           ans++;
	       }
	   if(s[n-2]=='0' && s[n-1]=='0'){
	       s[n-1]='1';
	       ans++;
	   }
	       
	       
	   }
	   if(count == 0){
	       cout << (n+1)/2 << endl;
	   }
	   else{
	       cout << ans << endl;
	   }
	   
	}
	return 0;
}
