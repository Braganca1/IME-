#include <iostream>
#include <algorithm>
using namespace std;

int main (){
  int n, m, r;
  cin >> n >> m;
  int v[m];
  for (int i=0;i<m;i++){
    cin >> v[i];
  }
  sort (v,v+m);
  r=v[n-1]-v[0];
  for (int i=0;i<m-n+1;i++){
    if (v[n-1+i]-v[i]<r){
        r=v[n-1+i]-v[i];
    }
    else{
        r=r;
    }
  }
  cout << r;
}