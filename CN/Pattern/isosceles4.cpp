#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int i = 1;
while(i <= (n/2)+1){
    int spaces = 1;
    while(spaces <= n-i){
        cout<<' ';
        spaces++;
    }
    int j = 1;
    while( j<=i ){
        cout<<"*";
        j++;
    }
    j = i - 1;{
        while(j >=1 ){
            cout<<"*";
            j--;
        }
    }
   
    i++;
    cout<<endl;
}

while(i >= ((n/2)+1) && i <= n){
    int spaces;
    while(spaces = n-i){
        cout<<' ';
        spaces++;
    }
    int j = 1;
    while( j<=i ){
        cout<<"*";
        j++;
    }
    j = i - 1;{
        while(j >=1 ){
            cout<<"*";
            j--;
        }
    }
   
    i++;
    cout<<endl;
}
}