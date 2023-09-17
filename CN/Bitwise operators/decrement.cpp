#include <iostream>
using namespace std;

int main() {
int a = 10;
a -= 3;
cout<<a--<<endl; // first prints a and then decrement value of a(post decrement)
cout<<--a<<endl; // first decrements the value of a and then prints (pre decrement)
}