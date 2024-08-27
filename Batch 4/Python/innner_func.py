# def double_decker():
#     print("Double decker function called")
#     def inner_function():
#         print('Inner Function has been called')
#         return 3000
#     #return korar time e parenthesis dibo na
#     return inner_function

# # print(double_decker())
# print(double_decker()())


#ex-->2
def coding():
    print("Coding in Python")
def do_something(work):
    print("Work Started")
    work()
    print("Work ended")
def sleeping():
    print("Sleeping and dreaming in python")
    
do_something(coding)
print()
print()
do_something(sleeping)