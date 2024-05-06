doubled = lambda num : num * 2
# print(doubled(4))

squared = lambda num : num**2
# print(squared(3))

add = lambda a,b : a+b
# print(add(5,6))


numbers = [5,10,15,20,25,30]
doubled_nums = map(doubled,numbers)
print(list(doubled_nums))
trippled_nums  = map(lambda x : x*3, numbers)
print(list(trippled_nums))

actors = [
    {'name' : 'digu', 'age' : 45},
    {'name' : 'nafi', 'age' : 25},
    {'name' : 'chayon', 'age' : 17},
    {'name' : 'mosta', 'age' : 38},
    {'name' : 'husu', 'age' : 30}
]
junior = filter(lambda actor : actor['age']>30, actors)
fivers = filter(lambda five : five['agiuuue']%5==0, actors)
print(list(junior))
print(list(fivers))