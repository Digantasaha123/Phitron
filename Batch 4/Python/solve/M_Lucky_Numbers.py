a,b = int(input()).split
x =[]
for i  in range(a,b+1):
    if i==4 or i==7:
        x.append(i)
    
if x:
    print(x)
else :
    print(-1)
        