import sys
t = int(input())
for i in range(t):
    m,n,x,y=map(int,sys.stdin.readline().split())
    nx =1
    ny =1
    count =1
    result =-1
    while(nx!=m or ny != n):
        if nx==x and ny ==y:
            result = count
            break
        if nx == m:
            nx = 1
            ny += 1
            count +=1
            continue
        if ny == n:
            ny = 1
            nx += 1
            count += 1
            continue
        count+=1
        nx += 1
        ny += 1
    print(result)