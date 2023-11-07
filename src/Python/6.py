def solve(arr):
    a = sorted(arr)
    list(map(lambda x: print(x, end=' '), a))


n = int(input())
arr = list(map(int, input().split()))

solve(arr)
