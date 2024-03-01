#include <iostream>
using namespace std;

int main (){
  int n;
  int a=0,w=0,t=0,r=0;
  string s;
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> s;
    if (s=="AC"){
      a+=1;
    }
    if (s=="WA"){
      w+=1;
    }
    if (s=="TLE"){
      t+=1;
    }
    if (s=="RE"){
      r+=1;
    }
  }
  cout << "AC x " << a <<  "\n";
  cout << "WA x "<< w <<   "\n";
  cout << "TLE x "<< t <<   "\n";
  cout << "RE x " << r;  
}