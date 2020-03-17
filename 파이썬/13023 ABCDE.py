import sys
from collections import deque
n,m = map(int,sys.stdin.readline().split())
friend = [[0 for i in range(n)] for j in range(n)]
for i in range(m):
    a,b = map(int,sys.stdin.readline().split())
    friend[a][b] =1
    friend[b][a] =1
q= deque()
visit = [False] * n
for i in range(n):
    print(visit)
    visit = [False] * n
    for j in range(n):
        if friend[i][j] == 1 and visit[j] ==False:
            location = [j,1]
            q.appendleft(location)
            while len(q) != 0:
                res = q.popleft()
                for k in range(n):
                    if friend[res[0]][k] ==1 and  visit[k] == False:
                        visit[k]=True
                        print(res[1])
                        location = [k,res[1]+1]
                        q.appendleft(location)
                        if res[1] ==4:
                            print(1)
                            sys.exit()
print(0)


