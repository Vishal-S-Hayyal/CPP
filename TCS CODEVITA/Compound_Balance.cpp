#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> PI;
typedef pair<ll, ll> PL;
typedef set<int,int> si;
typedef map<int,int> mi;

int valency(char c) {
    int ascii = (int)c;
    int sum = 0;
    while(ascii > 0) {
        sum += ascii % 10;
        ascii /= 10;
    }
    while(sum > 9) {
        int temp = sum;
        sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string compound;
    cin >> compound;
    int equivalentPoint;
    cin >> equivalentPoint;
    int valencyA = valency(compound[0]);
    int valencyB = valency(compound[1]);
    bool isPossible = false;
    for(int i = equivalentPoint / valencyA; i >= 1; i--) {
        if((equivalentPoint - i * valencyA) % valencyB == 0) {
            cout << compound[0] << i << " " << compound[1] << (equivalentPoint - i * valencyA) / valencyB << "\n";
            isPossible = true;
        }
    }
    if(!isPossible) {
        cout << "Not Possible\n";
    }
    return 0;
 
return 0;
}