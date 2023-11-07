# A. Team - https://codeforces.com/contest/231/problem/A

def solve():
    n = int(input())
    res = 0
    for _ in (range(n)):
        arr = list(map(int, input().split()))
        answer = arr.count(1)
        if answer >=2:
            res+=1
    return res

print(solve())





