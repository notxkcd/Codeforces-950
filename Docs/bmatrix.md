# Beautiful Matrix


My original solution was this


[Problem](https://codeforces.com/contest/263/problem/A)
~~~python
def solve(arr):
    pos = arr.index(1)+1
    steps = 0
    if pos == 13:
        return 0
    while (pos != 13):
        if (pos >= 1 and pos <= 10):
            pos += 5
            steps += 1
        elif (pos >= 11 and pos < 13):
            pos += 1
            steps += 1
        elif (pos > 13 and pos <= 15):
            pos -= 1
            steps += 1
        elif (pos >= 16 and pos <= 25):
            pos -= 5
            steps += 1
    return steps

grid = [list(map(int, input().split())) for _ in range(5)]
arr = [element for row in grid for element in row]

print(solve(arr))

~~~


I didn't quite understood it at first then I understood what they mean by swapping. So did all that pattern matching edge cases.


Then I looked into actual solution

~~~cpp
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

~~~

not gonna lie it;s pretty easy; just need to understand the pattern.

The concept here is to learn is **Manhattan Distance.**

In the context of Manhattan distance, $k$ represents the center of the grid along both the $i$ and $j$ axes(row, column).

$${k = {{n+1} \over{2}}}$$


${In\space the\space context\space of\space  an\space nxn\space matrix,}$
$${Center\space Point = (k,k)}$$
$${Manhatten\space Distance = |i-k| + |j-k| }$$

In a ${5x5}$ grid, 
$${k = {{5+1} \over{2}} = 3}$$
$${Center\space Point = (3,3)}$$

$${Manhatten\space Distance = |i-3| + |j-3| }$$

Calculating Steps:

${|i - 3| }$ -   distance from center row
${|j - 3| }$ -   distance from center column

you can also say the above as swapping(perspective).


