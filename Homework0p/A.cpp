#include <iostream>
using namespace std;

int main (){
  int x,y;
  float a,b;
  cin >> x >> y;
  b=y/2.0-x;
  a=2*x-y/2.0;
  if(a>=0 && b>=0 && a==int(a) && b==int(b)){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}