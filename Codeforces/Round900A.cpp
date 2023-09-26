#include <bits/stdc++.h>
using namespace std;

bool count(int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]==k){
            return true;
        }
    }
    return false;
}

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // for(int i=0; i<n; i++){
    //     if(a[i]==k){
    //     cout<<"Yes"<<endl;
    //     break;}
    // }
   bool result=count(a,n,k);
   if(result){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
}
}