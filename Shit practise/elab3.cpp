#include <iostream>
using namespace std;

int main() {
int p,d,m,s;
cin>>p>>d>>m>>s;
int sum=0;
int count=0;
while(sum<=s){
    if(p<m){
        sum+=m;
    }
    else{
        sum+=p;
        p-=d;
    }
    count++;
}
cout<<count-1;
return 0;
}