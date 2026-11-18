n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    for i in range(n1):
        print(a[i] * b[i], end=" " if i < n1 - 1 else "\n")