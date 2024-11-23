u# def sum(a,b,c=0):
#     print(a+b+c)
# sum(1,5)
def add(*args):
    sum = 0
    for num in args: 
        sum +=num
    return sum

result = add(5,4)
print(5,5)