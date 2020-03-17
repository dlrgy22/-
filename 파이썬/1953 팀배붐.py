import sys
num = int(sys.stdin.readline())
visit =[0 for _ in range(num+1)]
blue=[]
white =[]
check = True
for i in range(1,num+1):
    number = list(map(int,sys.stdin.readline().split()))
    for j in blue:
        if i == j:
            check = False
            break
    if check:
        print(i)
        if visit[i] == 0:
            blue.append(i)
            visit[i]=1
        j=1
        while j<len(number):
            if visit[j] == 0:
                white.append(number[j])
                visit[j] =1
            j+=1
    else:
        if visit[i] == 0:
            white.append(i)
            visit[i]=1
        j=1
        while j<len(number):
            print(number[j])
            blue.append(number[j])
            visit[j]=1
            j+=1
    check =True
print(blue)
print(white)
