#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int i = 1;
while( i <= n){
    int j = 1;
      char startChar = 'A'+i-1;
    while(j <= i){
    char output = startChar+j-1;
    cout<<output;
    j++;
    }
    i++;
    cout<<endl;
    }
}