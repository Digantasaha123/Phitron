str = input().strip()
temp = ''
ans = []
x = 0
count = 0
for char in str:
    temp+=char
    if char == 'L':
        x+=1
    elif char == "R":
        x-=1
    if x == 0:
        count+=1
        ans.append(temp)
        temp = ''
print(count)
for res in ans:
    print(res)
    