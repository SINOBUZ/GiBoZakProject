import time
import os

start_time = time.time()

for a in range(1, 101):
    for i in range (0, a - 1):
        print(" ", end ='')
    ...
    print("*") # \n이 있던 자리임.
    # 여기부터 중간줄
    for j in range(0, a - 2):
        for k in range(2, a - j):
            print(" ", end = '')
        ...
        print("*", end ='')
        ...
        for l in range (0, 2 * j + 1):
            print(" ", end = '')
        ...
        print("*")
    ...

    if (a > 1):
        for o in range(0, 2 * a - 1):
            print("*", end = '')
        ...
        print("\n")
    ...
    print("a = " + str(a))
...
print("%s초" %(time.time() - start_time))
os.system('Pause')

'''
end = clock(); //시간 측정 끝 
result = (double)(end - start); // 결과 출력
printf("실행 시간 : %.00fms\n", result);
system("pause");
'''