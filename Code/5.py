# A. Beautiful Matrix - https://codeforces.com/contest/263/problem/A

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

# arr = [list(map(int, input().split())) for _ in range(5)]
grid = [list(map(int, input().split())) for _ in range(5)]
arr = [element for row in grid for element in row]


print(solve(arr))
