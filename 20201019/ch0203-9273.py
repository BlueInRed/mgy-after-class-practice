f = [0]
f.append(1)
f.append(2)

def sol(x):
    for i in range(1, x + 1):
        f.append(f[i - 1] + f[i - 2])
    return 

T = int(input())
sol(255)

while T:
    T = T - 1
    n = int(input())
    print(f[n - 1])