#include <iostream>

using namespace std;

int main() {
  long int c0;
  int steps = 0;
  cout << "Please enter a number" << endl;
  cin >> c0;
  if (c0 > 0){
    while (c0 != 1){
      if(c0 % 2 == 0){
        c0 = c0 / 2;
      }
      else{
        c0 = 3 * c0 + 1;
      }
      cout << c0 << endl;
      steps += 1;
    }
    cout << "steps = " << steps << endl;
  }
  else{
    return 0;
  }
  // 1. take any non-negative and non-zero integer number and name it c0
  // 2. if it's even, evaluate a new c0 as c0 / 2
  // 3. otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
  // 4. if c0 ≠ 1, skip to point 2
}