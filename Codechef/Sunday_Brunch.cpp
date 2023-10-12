#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int x,y;
	cin>>x>>y;
	int divide=x/y;
	if(divide>=20){
	    cout<<"20"<<endl;
	}
	else{
	    cout<<divide<<endl;
	}
	}
	return 0;
}
