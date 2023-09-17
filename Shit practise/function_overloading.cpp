#include <iostream>
using namespace std;

class area
{
    public:
    int l,b,s;
     void AREA(int a)
    {
        s=a;
        cout<<"Area of square is "<<s*s<<endl;
    }

     void AREA(int a, int d)
    {
        l=a;
        b=d;
        cout<<"Area of rectangle is "<<a*d<<endl;
    }

};

int main()
{
    area a1;
    a1.AREA(5);
    a1.AREA(5,10);
    return 0;
}