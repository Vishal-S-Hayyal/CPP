#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int i = 1;
while(i <= n){
    int spaces = 1;
    while(spaces <= n-i){
        cout<<' ';
        spaces++;
    }
    int j = 1;
    int p = i;
    while( j<=i ){
        cout<<p;
        j++;
        p++;
    }
    j = 2*i-2;{
    while( j >=i ){
        cout<<j;
        j--;}
    }
    i++;
    cout<<endl;
}
}