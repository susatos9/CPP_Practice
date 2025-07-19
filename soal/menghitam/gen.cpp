#include <bits/stdc++.h>
#include "teslib.h"
using namespace std;

int main(int argc, char* argv[]){
  registerGen(argc, argv, 1);

  int n = rnd.next(1,100);
  cout << n << '\n';

  string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};
  while (n--) {
    int idx = rnd.next(0,6);
    cout << hari[idx];

    if (n == 0) cout << '\n';
    else cout << ' '; 
  }
}
