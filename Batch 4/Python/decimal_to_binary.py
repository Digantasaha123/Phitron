

d = int(input())
if d == 0:
    b = "0"
else:
    b = ""
    n = d


    while n > 0:
        print(f'{n} -->{str(n % 2)}')
        
        b = str(n % 2) + b


        n = n // 2



print(f"Binary: {b}")


