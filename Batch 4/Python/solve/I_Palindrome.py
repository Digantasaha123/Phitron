str = input()
str2 = str[::-1]
for i in str2:
    if str2[i] == '0':
        continue
    else :
        print(str2[i], end="")
print()
if str == str2:
    print("YES")    
else :
    print("NO")

