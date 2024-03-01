#include <iostream>
#include <algorithm>
using namespace std;

int main (){
  int N, K, min=0;
  cin >> N >> K;
  int p[N];
  for(int i=0;i<N;i++){
    cin >> p[i];
  }
  sort(p+0,p+N);
  for(int i=0;i<K;i++){
    min+=p[i];
  }
  cout << min;
}