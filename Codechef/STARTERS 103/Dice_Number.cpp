#include <bits/stdc++.h>
using namespace std;

void sortString(string &str) 
{ 
   sort(str.begin(), str.end(), greater<char>()); 
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string A1,A2,A3,B1,B2,B3;
	    cin>>A1>>A2>>A3>>B1>>B2>>B3;
	    string alice=A1+A2+A3;
	    string bob=B1+B2+B3;
	    sortString(alice);
	    sortString(bob);
	    if(alice<bob){
	        cout<<"BOB"<<endl;
	    }
	    else if(alice>bob){
	        cout<<"ALICE"<<endl;
	    }
	    else{
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
