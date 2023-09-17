#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int i = 1;
while( i <= n){
        int j = 1;
        char StartChar = 'A'+n-i;
    while(j <= i){
    char output = StartChar+j-1;
    cout<<output;
    j++;
    output++;
    }
    i++;
    cout<<endl;
    }
}