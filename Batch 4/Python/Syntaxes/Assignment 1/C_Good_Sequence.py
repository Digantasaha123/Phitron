n = int(input())
a = list(map(int, input().split()))
dic = {}
for num in a:
    if num  in dic:
        dic[num] += 1
    else :
        dic[num] =1
ans = 0

for num,cnt in dic.items():
    if cnt > num :
        ans += cnt-num
    elif  num > cnt :
        ans+=cnt
print(ans)
for i in num:
