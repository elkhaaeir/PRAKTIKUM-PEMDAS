n = int(input())
zetsu = list(map(int, input().split()))

for i in range(n):
    print(zetsu[i] * (i + 1), end=" " if i < n - 1 else "\n")