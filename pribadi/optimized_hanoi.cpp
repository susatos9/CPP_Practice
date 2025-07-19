#include "bits/stdc++.h"
using namespace std;

void hanoi(int n, char inital_rod, char destination_rod, char aux_rod){
  if (n == 1) {
    cout << "move disk 1 to rod " << destination_rod << endl;
    return;
  }
  hanoi(n-1, inital_rod, aux_rod, destination_rod);
  cout << "move disk " << n << " to rod " << destination_rod << endl;
  hanoi(n-1, aux_rod, destination_rod, inital_rod);
}

int main(){
  int n;
  cout << "Enter the amount of plates to be moved : ";cin >> n;
  char a,b,c;
  cout << "Enter the initial rod : "; cin >> a;
  cout << "Enter the destination rod : "; cin >> b;
  cout << "Enter the auxiliary rod : "; cin >> c;
  hanoi(n, a, b, c);
}
