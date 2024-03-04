#include <iostream>
using namespace std;

int main (){
  int a=0;
  string s;
  cin >> s;
  for (unsigned int i=0;i<s.size();i++){
    a+=int(s[i]-48);
  }
  if (a%9==0){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}