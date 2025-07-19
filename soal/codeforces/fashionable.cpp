#include <bits/stdc++.h>
using namespace std;


int main(){
  int t = 0; cin >> t;
  
  while (t-- > 0) {
    int step = 0;
    int n = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int small = 0;
    int big = n - 1;
    while((v[small] + v[big]) % 2 == 1 && small < big) {
      int signal = 0;
      if((v[small + 1] + v[big]) % 2 == 0){
        step++;
        signal = 1;
      } else if((v[small] + v[big - 1]) % 2 == 0){
        step++;
        signal = 1;
      } else {
        small++;
        big--;
      }

      if(signal == 1) {
        break;
      }
      step++;
    }
    cout << step << endl;
  }
}
