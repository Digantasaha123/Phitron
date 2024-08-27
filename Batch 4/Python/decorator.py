def timer(func):
    def inner():
        print("Timer Started")
        func()
        print("Timer Ended")
    return inner
@timer
def fact():
    print('factorial function is called')
    
fact()
