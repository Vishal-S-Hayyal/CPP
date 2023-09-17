# include<iostream>
# include<conio.h>
using namespace std;

 template <class t>
t sum(t a, t b)
{
    return a+b;
}

int main(){
    cout<<"Sum of integers:"<<sum(5,9)<<endl;
    cout<<"Sum of float:"<<sum(1.1,2.2)<<endl;
    return 0;
}

