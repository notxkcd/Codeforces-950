/* 29-Oct-2023 -  A. Beautiful Matrix -
 * https://codeforces.com/contest/263/problem/A */

#include <iostream>
using namespace std;

int main() {
  int x = 0;
  auto k = ((5 + 1) / 2); // Middle of 5x5 Matrix. n+1/2 of nxn matrix

  // find pos of 1
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      cin >> x;
      if (x == 1) {
        cout << abs(i - k) + abs(j - k);
        break;
      }
    }
  }
  return 0;
}

/* In a 7x7 grid, k = 7 + 1/2 = 4, so the center is at (4,4) */
/* center is at (k,k) */
/* Manhattan Distance=∣x−k∣+∣y−k∣ */
