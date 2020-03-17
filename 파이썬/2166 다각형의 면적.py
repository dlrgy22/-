import  sys
n = int(sys.stdin.readline())
location = []
for i in range(n):
    x,y = map(int,sys.stdin.readline().split())
    location.append([x,y])
print(location)
a