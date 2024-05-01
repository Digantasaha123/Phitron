# Example 1: range with only stop argument
for i in range(5):
    print(i)  # Output: 0, 1, 2, 3, 4

# Example 2: range with start and stop arguments
for i in range(2, 5):
    print(i)  # Output: 2, 3, 4

# Example 3: range with start, stop, and step arguments
for i in range(1, 10, 2):
    print(i)  # Output: 1, 3, 5, 7, 9
    
    
    
    # Example: Print numbers from 1 to 5 using a for loop
for num in range(1, 6):
    print(num)

# Example: Print numbers from 1 to 10 and classify them as even or odd using a for loop with if-elif statement
for num in range(1, 11):
    if num % 2 == 0:
        print(num, "is even")
    else:
        print(num, "is odd")
        
# Example: Print numbers from 1 to 5, skipping even numbers using a for loop with continue statement
for num in range(1, 6):
    if num % 2 == 0:
        continue
    print(num)
    
# Example: Print numbers from 1 onwards until reaching a number greater than 5 using a for loop with break statement
for num in range(1, 10):
    print(num)
    if num > 5:
        break
# Example: Print numbers from 1 onwards until reaching a number greater than 5 using a for loop with break statement
for num in range(1, 10):
    print(num)
    if num > 5:
        break
# Example: Iterate over each element in a list
numbers = [1, 2, 3, 4, 5]

for num in numbers:
    print(num)


