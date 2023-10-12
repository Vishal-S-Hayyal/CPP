#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n<3){
	    cout<<"GOLD"<<endl;
	}
	else if(n>=3 && n<6){
	    cout<<"SILVER"<<endl;
	}
	else{
	    cout<<"Bronze"<<endl;
	}
	return 0;
}
