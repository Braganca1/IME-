#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s[n];
    for (int i=0;i<n;i++){
        cin >> s[i];
    }

    sort (s+0,s+k);

    for (int i=0;i<k;i++){
        cout << s[i] << "\n" ;
    }
}