#include <iostream>
using namespace std;

int converter(int S, int E, int W){
    for(int i = S; i<=E; i+=W){
        int celsius = (5/9)*(i-32);
        cout<<celsius<<endl;
    }
}

int main() {
    converter(120,200,40);
}
