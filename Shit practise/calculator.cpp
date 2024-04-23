#include<bits/stdc++.h>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
char op;
int num1, num2;

cout<<"Choose operation to perform: +, -, *, /"<<endl;
cin>>op;

cout<<"Enter operands"<<endl;
cin>>num1>>num2;

switch(op) {
    case '+' :
    cout<<"Sum is : "<<num1 + num2<<endl;
    break;

    case '-' :
    cout<<"Difference is :"<<num1-num2<<endl;
    break;

    case '*' :
    cout<<"Multiplication is :"<<num1*num2<<endl;
    break;

    case '/':
    cout<<"Division is :" <<num1/num2<<endl;
    break;
    
    default:
    cout<<"Enter valid Operator !"<<endl;
    break;
}
 
return 0;
}