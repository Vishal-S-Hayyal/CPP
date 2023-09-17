// #include <iostream>
// using namespace std;

// int main() {
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     char  startChar ='A'+i-1;
//     while(j<=n){
//         char ch = startChar+j-1;
//         cout<<ch;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }
// }

#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
int i = 1;
while(i<=n){
    int j = 1;
    int p = i;
    while(j<=n){
        char ch = 'A'+p-1;
        cout<<ch;
        j++;
        p++;
    }
    i++;
    cout<<endl;
}
}

