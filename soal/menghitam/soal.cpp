#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >>n ;

  map<string,int> result;
  result["senin"] = 1;
  result["selasa"] = 2;
  result["rabu"] = 3;
  result["kamis"] = 4;
  result["jumat"] = 5;
  result["sabtu"] = 6;
  result["minggu"] = 7;

  int hasil = 0;
  while(n--){
    string hari; cin >> hari;
    hasil+=result[hari];
  }
  cout << hasil;
}
