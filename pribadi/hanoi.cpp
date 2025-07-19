#include <bits/stdc++.h>
using namespace std;

void hanoi(int smallest_block ,int largest_block, int position_initial ,int position_target){
  if (largest_block >= smallest_block && smallest_block > 0 && largest_block > 0) {
    
    int unused_block;
    if (position_target == position_initial) {
      cout << "The target position is identical : " << position_target << "smallest_block " << smallest_block << endl;
      return;
    }
    if (position_initial == 1 and position_target == 2) {
      unused_block = 3;
    }
    else if (position_initial == 1 and position_target == 3) {
      unused_block = 2;
    }
    else if (position_initial == 2 and position_target == 1) {
      unused_block = 3;
    }
    else if (position_initial == 2 and position_target == 3) {
      unused_block = 1;
    }
    else if (position_initial == 3 and position_target == 1) {
      unused_block = 2;
    }
    else if (position_initial == 3 and position_target == 2) {
      unused_block = 1;
    }

    if (smallest_block == largest_block) {
      cout << "Block " << smallest_block << " is moved to tower " << position_target << endl;
      return;
    }

    hanoi(smallest_block, largest_block - 1, position_initial, unused_block);
    hanoi(largest_block, largest_block, position_initial, position_target);
    hanoi(smallest_block, largest_block - 1, unused_block, position_target);
  }
}

int power2(int base, int exponent){
  return base << exponent;
}

int main(){
  int n; 
  cout << "Jumlah balok Hanoi : ";
  cin >> n; cout << endl;

  int position_initial, position_target;
  cout << "Position initial is : "; cin >> position_initial; cout << "position_target is : "; cin >> position_target; cout << endl;
  cout << "Jumlah langkah yang dibutuhkan adalah " << power2(1,n) - 1 << endl;
  hanoi(1,n,position_initial, position_target);
}
