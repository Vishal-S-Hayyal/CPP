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

int solution(vi&arr, int pos)
{
    int in = -1;
    int maxi = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            in = i;
            maxi = arr[i];
        }
    }
    if (in == pos)return 0;
    arr[in] = -1;

    for (int i = 0; i < in; i++)
    {
        if (arr[i] > 0)arr[i]++;
    }

    return 1 + solution(arr, pos);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n;
    cin >> n;
    vi arr(n);
    for (auto &i : arr)cin >> i;
    int k;
    cin >> k;
    k--;
    cout << 1 + solution(arr, k) << endl;
    return 0;
 
}