import sys
location =[]
for i in range(3):
    x,y=map(int,sys.stdin.readline().split())
    location.append([x,y])
result = (location[1][0] - location[0][0])*(location[2][1]-location[0][1]) - (location[1][1]-location[0][1])*(location[2][0]-location[0][0])
if result < 0:
    print(-1)
elif result > 0:
    print (1)
else:
    print(0)