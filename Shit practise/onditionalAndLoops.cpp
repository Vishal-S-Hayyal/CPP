#include<iostream>
using namespace std;
int main()
{
// int a;
// cout<<"Enter a and b"<<endl;
// cin>>a;
// cout<<"Value of a is :"<< a <<endl;
// if(a=0)
// {
//   cout<<"A is zaro"<<endl;
// }
// if(a>0)
// {
//   cout<<"A positive"<<endl;
// }
// else{
//   cout<<"A is negative"<<endl;
// }
char C;
cout<<"Enter C"<<endl;
cin>>C;
int d;
d=C;
if(d>=97&&d<=122)
{
  cout<<"Entered character is lowercase "<<endl;
}
else if(d>=65&&d<=90)
{
  cout<<"Entered character is Uppercase "<<endl;
}
if(d>=48&&d<=57)
{
  cout<<"Entered character is number "<<endl;
}


return 0;
}