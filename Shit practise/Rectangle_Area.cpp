
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1,y1,x2,y2;
  cout<<"Enter x1,y1,x2,y2"<<endl;
  cin>>x1>>y1>>x2>>y2;
  int x3,y3,x4,y4;
  cout<<"Enter x3,y3,x4,y4"<<endl;
  cin>>x3>>y3>>x4>>y4;
  
  int A1 = (x2-x1)*(y2-y1);
  int A2 = (x4-x3)*(y4-y3);
  
  int left = max(x1,x3);
  int right = min(x2,x4);
  int bottom = max(y1,y3);
  int top = min(y2,y4);
  
  int Aintr=0;
  if((left<right)&&(bottom<top))
  {
      Aintr=(right-left)*(top-bottom);
  }
  int ans = (A1+A2)-Aintr;
  cout<<"Area of two rectangles is: "<<ans<<endl;
    return 0;
}