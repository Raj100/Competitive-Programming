t = int(input())
for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))

    groups = {}
    for i, val in enumerate(b):
        groups.setdefault(val, []).append(i)

    a = [0] * n
    label = 1
    possible = True

    for val, indices in groups.items():
        if len(indices) % val != 0:
            possible = False
            break
        for i in range(0, len(indices), val):
            chunk = indices[i:i+val]
            for idx in chunk:
                a[idx] = label
            label += 1

    if not possible:
        print(-1)
    else:
        print(" ".join(map(str, a)))
