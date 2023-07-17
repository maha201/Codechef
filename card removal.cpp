

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    map<int, int>m;
	    for(int i=0; i<N; i++){
	       cin>>arr[i] ;
	       m[arr[i]]++;
	    }
	    int max=0;
	    for(int i=0; i<N; i++){
	        if(max<m[arr[i]])
	        max = m[arr[i]];  
	}
	cout<<N-max<<endl;
	}
	return 0;
}
