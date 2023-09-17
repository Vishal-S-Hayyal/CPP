#include <iostream>
using namespace std;

bool isprime(int n){
    int d = 2;
    while(d<n){
        if(n % d == 0 ){
            return false;
        }
        d++;
    }
    return false;
}

int main() {
    bool ans = isprime(27);
    cout<<ans<<endl;

}