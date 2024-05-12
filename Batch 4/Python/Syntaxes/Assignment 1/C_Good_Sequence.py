x = int(input())
a = input()
ar = list(map(int,a.split()))
print(ar)
dict = {}
for i in range(x):
    dict[ar[i]] = 0
    
for i in range(x):
    if 