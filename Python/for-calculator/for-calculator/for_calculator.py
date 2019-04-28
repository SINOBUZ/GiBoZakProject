import time
import os

start_time = time.time()
n=1
for a in range(1, 101):
    for i in range (0, a - 1):
        n = n + i
    ...
    n = n + a
    # 여기부터 중간줄
    for j in range(0, a - 2):
        for k in range(2, a - j):
            n = n + k
        ...
        n = n + j
        ...
        for l in range (0, 2 * j + 1):
            n = n + l
        ...
        n = n + j
    ...

    if (a > 1):
        for o in range(0, 2 * a - 1):
            n = n + o
        ...
        n = n + a
    ...

print(n)
print("%s초" %(time.time() - start_time))
os.system('Pause')