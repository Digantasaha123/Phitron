a = int(input())
b = int(input())
x = int(a)
y = int(b)
ans = []
flag = True
for i in range(x, y+1):
    while i>0:
        if x%10 == 4 or x%10 ==7:
            ans.append(str(x%10))
            x = x//10
        else :
            break;
        
if len(ans) == 0:
    print(-1)
else :
    for i in ans :
        print(i, end=" ")