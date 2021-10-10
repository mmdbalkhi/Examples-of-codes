def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num-1)
number = int(input("Enter your number = "))
print(factorial(number)
