#include <iostream>
using namespace std;

int main (){
    long long n,cx,cy,r,t=0;
    cin >> n >> cx >> cy >> r;
    long long x[n],y[n];
    for (long long i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for (long long i=0;i<n;i++){
      if ((x[i]-cx)*(x[i]-cx)+(y[i]-cy)*(y[i]-cy)<=r*r){
            t+=1;
        } 
    }
    cout << t;
}